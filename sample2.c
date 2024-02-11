#include <unistd.h>
#include <stdio.h>

void print_solution(int arr[4][4]);

int is_valid(int grid[4][4], int row, int col, int num) {
    // see if number is already present in the current row or column
    for (int i = 0; i < 4; i++) {
        if (grid[row][i] == num || grid[i][col] == num) 
            return 0; // Number is already present in the row or column
    }
    return 1; // Number is valid for our use
}

int solve(int grid[4][4], int row, int col) {
    // Base case: If all cells are filled, return true
    if (row == 4) 
        return 1;

    // Move to the next row if the current row is filled
    if (col == 4)
        return solve(grid, row + 1, 0);

    // Skip filled cells
    if (grid[row][col] != -1)
        return solve(grid, row, col + 1);

    // Try placing a number in the current cell
    for (int num = 1; num <= 4; num++) {
        if (is_valid(grid, row, col, num)) 
        {
            grid[row][col] = num;

            // Recuring to fill the next cell
            if (solve(grid, row, col + 1))
                return 1; // Solution found

            // Backtrack if no solution found
            grid[row][col] = -1;
        }
    }
    return 0; // No valid number found
}

void solve_with_constraints(int row_constraints[8], int col_constraints[8]) {
    int grid[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            grid[i][j] = -1; // Initialize grid with -1 to represent empty cells
        }
    }

    // Applying row constraints here
    for (int i = 0; i < 4; i++) {
        if (row_constraints[i] == 1) {
            grid[i][0] = 4;
        } else if (row_constraints[i] == 4) {
            grid[i][3] = 4;
            grid[i][2] = 3;
            grid[i][1] = 2;
            grid[i][0] = 1;
        }
    }
    
        for (int i = 0; i < 4; i++) {
        if (row_constraints[i + 4] == 1) {
            grid[i][3] = 4;
        } else if (row_constraints[i + 4] == 4) {
            grid[i][3] = 1;
            grid[i][2] = 2;
            grid[i][1] = 3;
            grid[i][0] = 4;
        }
    }


    // Applying column constraints here
    for (int i = 0; i < 4; i++) {
        if (col_constraints[i] == 1) {
            grid[0][i] = 4;
        } else if (col_constraints[i] == 4) {
            grid[3][i] = 4;
            grid[2][i] = 3;
            grid[1][i] = 2;
            grid[0][i] = 1;
        }
    }
    
        for (int i = 0; i < 4; i++) {
        if (col_constraints[i + 4] == 1) {
            grid[3][i] = 4;
        } else if (col_constraints[i + 4] == 4) {
            grid[3][i] = 1;
            grid[2][i] = 2;
            grid[1][i] = 3;
            grid[0][i] = 4;
        }
    }

    // Solve the puzzle
    if (solve(grid, 0, 0)) {
        print_solution(grid);
    } else {
        write(1, "No solution found\n", 18);
    }
}

void print_solution(int arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    //int row_constraints[8] = {4, 3, 2, 1, 1, 2, 2, 2}; //3 1 2 2 1 3 2 2 2 2 3 1 3 1 2 2
    //int col_constraints[8] = {4, 3, 2, 1, 1, 2, 2, 2};
    
    int col_constraints[8] = {3, 1, 2, 2, 1, 3, 2, 2};
    int row_constraints[8] = {2, 2, 3, 1, 3, 1, 2, 2};

    solve_with_constraints(row_constraints, col_constraints);

    return 0;
}

