# Matrix-addition
Title: Matrix Addition

Description: This C program performs addition of two matrices and displays the result.

Code:

#include <stdio.h>

#define ROW 3
#define COL 3

void matrixAddition(int matrix1[ROW][COL], int matrix2[ROW][COL], int result[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void displayMatrix(int matrix[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROW][COL] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[ROW][COL];

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    matrixAddition(matrix1, matrix2, result);

    printf("\nResultant Matrix:\n");
    displayMatrix(result);

    return 0;
}

Explanation:

The program starts with the inclusion of the standard input/output library stdio.h.

The ROW and COL macros are defined to represent the dimensions of the matrices.

The matrixAddition function takes in two matrices, matrix1 and matrix2, and computes the addition. The result is stored in the result matrix.

The displayMatrix function is used to display the elements of a given matrix.

In the main function, we declare and initialize three matrices: matrix1, matrix2, and result.

We then display matrix1 using the displayMatrix function.

Next, we display matrix2 using the same displayMatrix function.

The matrixAddition function is called with matrix1, matrix2, and result as arguments to perform the matrix addition.

Finally, the resultant matrix is displayed using the displayMatrix function.

Usage:

Compile the code using a C compiler.
Run the executable.
The program will display the given matrices and the resultant matrix after addition.
