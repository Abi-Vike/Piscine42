#include <stdio.h>
#include "rush-01.h"

// Helper function to check if a number is already present in a given row
int is_num_present_in_row(int row, int num) {
    for (int i = 0; i < GRID_SIZE; i++) {
        if (grid[row][i] == num) {
            return 1; // Number is already present in the row
        }
    }
    return 0; // Number is not present in the row
}

// Helper function to check if a number is already present in a given column
int is_num_present_in_col(int col, int num) {
    for (int i = 0; i < GRID_SIZE; i++) {
        if (grid[i][col] == num) {
            return 1; // Number is already present in the column
        }
    }
    return 0; // Number is not present in the column
}

int is_valid(int row, int col, int num) {
    // Check if the number is already present in the current row or column
    if (is_num_present_in_row(row, num) || is_num_present_in_col(col, num)) {
        return 0; // Number is already present in the row or column
    }

    // Check if the number is within the constraints for the current row and column
    /*
    if (num <= row_constraints[row] && num <= col_constraints[col + GRID_SIZE] &&
        num >= row_constraints[row + GRID_SIZE] && num >= col_constraints[col]) {
        return 1; // Number satisfies the constraints
    }*/
    if (num <= row_constraints[row] && num >= col_constraints[col + GRID_SIZE] &&
        num >= row_constraints[row + GRID_SIZE] && num >= col_constraints[col]) {
        return 1; // Number satisfies the constraints
    }

    return 0; // Number does not satisfy the constraints
}
// Backtracking algorithm to solve the rush project problem
int solve(int row, int col) {
    printf("I am here!\n");
    // Base case: If all rows are processed, return true
    if (row == GRID_SIZE) {
        return 1;
    }

    // Move to the next column if the current column is out of bounds
    if (col == GRID_SIZE) {
        return solve(row + 1, 0);
    }

    // If the current cell is already filled, move to the next cell
    if (grid[row][col] != 0) {
        return solve(row, col + 1);
    }

    // Try placing a box of each height in the current cell
    for (int num = 1; num <= GRID_SIZE; num++) {
        // Check if placing a box of height 'num' at the current cell is valid
        if (is_valid(row, col, num)) {
            // Place the box and recursively explore the next cell
            grid[row][col] = num;
            if (solve(row, col + 1)) {
                return 1; // Solution found
            }
            // If no solution is found, backtrack by removing the box
            grid[row][col] = 0;
        }
    }

    // No valid placement found for any height in the current cell
    return 0;
}