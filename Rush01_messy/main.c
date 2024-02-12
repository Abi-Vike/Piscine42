#include <stdio.h>
#include <stdlib.h>
#include "rush-01.h"

// Define and initialize global variables
int grid[GRID_SIZE][GRID_SIZE] = {{0}};
int row_constraints[GRID_SIZE * 2] = {0};
int col_constraints[GRID_SIZE * 2] = {0};
int all_parsed_tokens[GRID_SIZE * 4] = {0};

int main(int argc, char *argv[]) {
    // Check if the correct number of command-line arguments is provided
    if (argc != 2) {
        fprintf(stderr, "Usage: %s \"col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right\"\n", argv[0]);
        return 1;
    }

    // here we can display our input before parsing it
    printf("Input string: %s\n", argv[1]);

    // Parse input constraints
    //parse_input(argv[1]);
    parse_input();

    // here we can display our input before parsing it
    printf("All parsed tokens: ");
    for (int i = 0; i < GRID_SIZE * 4; i++) {
        printf("%d ",  all_parsed_tokens[i]);
    }
    printf("\n");
    printf("\n");

    // Print the parsed content
    /*------------------------------------------------------*/
    printf("Column constraints (up): ");
    for (int i = 0; i < GRID_SIZE; i++) {
        printf("%d ", col_constraints[i]);
    }
    printf("\n");

    printf("Column constraints (down): ");
    for (int i = GRID_SIZE; i < GRID_SIZE * 2; i++) {
        printf("%d ", col_constraints[i]);
    }
    printf("\n");

    printf("Row constraints (left): ");
    for (int i = 0; i < GRID_SIZE; i++) {
        printf("%d ", row_constraints[i]);
    }
    printf("\n");

    printf("Row constraints (right): ");
    for (int i = GRID_SIZE; i < GRID_SIZE * 2; i++) {
        printf("%d ", row_constraints[i]);
    }
    printf("\n");
    printf("\n");
    /*------------------------------------------------------*/

    // Solve the problem
    if (solve(0, 0)) {
        // Print the solution
        print_solution();

    } else {
        // No solution found
        error();
    }

    return 0;
}
