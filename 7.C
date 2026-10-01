#include <stdio.h>

#define ROWS 3
#define COLS 3

void printMatrix(int (*mat)[COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            // *(*(mat + i) + j) is equivalent to mat[i][j]
            printf("%d\t", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matrix elements:\n");
    printMatrix(matrix, ROWS);

    return 0;
}
