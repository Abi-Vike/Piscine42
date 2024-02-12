#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rush-01.h"

void parse_input() {
    // Predefined values for the constraints
    int col_up_values[GRID_SIZE] = {4, 3, 2, 1};
    int col_down_values[GRID_SIZE] = {1, 2, 2, 2};
    int row_left_values[GRID_SIZE] = {4, 3, 2, 1};
    int row_right_values[GRID_SIZE] = {1, 2, 2, 2};

    // Assign predefined values to the appropriate arrays
    for (int i = 0; i < GRID_SIZE; i++) {
        col_constraints[i] = col_up_values[i];
        col_constraints[i + GRID_SIZE] = col_down_values[i];
        row_constraints[i] = row_left_values[i];
        row_constraints[i + GRID_SIZE] = row_right_values[i];
    }
}
/*
void parse_input(char *input)
{
    // Tokenize input string using strtok
    char *token = strtok(input, " ");
    int index = 0;

    int col_up_index = 0; // Counter for upper constraints for columns
    int col_down_index = GRID_SIZE; // Counter for lower constraints for columns
    int row_left_index = GRID_SIZE * 2; // Counter for left constraints for rows
    int row_right_index = GRID_SIZE * 3; // Counter for right constraints for rows

    while (token != NULL && index < GRID_SIZE * 4) {
        // Store token in the all_parsed_tokens array
        all_parsed_tokens[index] = atoi(token);
        index++;

        // Distribute tokens to the appropriate constraints arrays based on their positions
        if (index <= GRID_SIZE) {
            col_constraints[col_up_index] = atoi(token);
            col_up_index++;
        } else if (index <= GRID_SIZE * 2) {
            col_constraints[col_down_index] = atoi(token);
            col_down_index++;
        } else if (index <= GRID_SIZE * 3) {
            row_constraints[row_left_index - GRID_SIZE * 2] = atoi(token);
            row_left_index++;
        } else if (index <= GRID_SIZE * 4) {
            row_constraints[row_right_index - GRID_SIZE * 3] = atoi(token);
            row_right_index++;
        }

        // Move to the next token
        token = strtok(NULL, " ");
    }

    // Error handling: check if all constraints are parsed
    if (index != GRID_SIZE * 4) {
        error();
    }

    
    // Initialize col_constraints with default values
    int default_col_constraints[GRID_SIZE * 2] = {4, 3, 2, 1, 1, 2, 2, 2};
    for (int i = 0; i < GRID_SIZE * 2; i++) {
        col_constraints[i] = default_col_constraints[i];
    }

    // Initialize row_constraints with default values
    int default_row_constraints[GRID_SIZE * 2] = {4, 3, 2, 1, 1, 2, 2, 2};
    for (int i = 0; i < GRID_SIZE * 2; i++) {
        row_constraints[i] = default_row_constraints[i];
    }
    
}
*/