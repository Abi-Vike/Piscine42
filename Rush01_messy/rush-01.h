#ifndef RUSH_01_H
#define RUSH_01_H

#define GRID_SIZE 4

// Global variables
extern int grid[GRID_SIZE][GRID_SIZE];          // Declaration only
extern int all_parsed_tokens[GRID_SIZE * 4];
extern int row_constraints[GRID_SIZE * 2];      // Upper and lower constraints for each row
extern int col_constraints[GRID_SIZE * 2];      // Left and right constraints for each column

// Function prototypes
//void parse_input(char *input);
void parse_input();
int is_valid(int row, int col, int num);
int solve(int row, int col);
void print_solution();
void error();

#endif /* RUSH_01_H */
