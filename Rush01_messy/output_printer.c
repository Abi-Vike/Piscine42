#include <stdio.h>
#include "rush-01.h"

void print_solution() {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            printf("%d", grid[i][j]);
            if (j < GRID_SIZE - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
