# Matrix-addition
This C program appears to perform matrix addition for two matrices A and B. Let's break down the code and provide explanations for each section:

```c
#include <stdio.h>
#include <conio.h>
```
- These lines include the necessary header files for standard input and output operations (`stdio.h`) and console input/output (`conio.h`).

```c
void main()
{
    // Variable declarations
    int r1, r2, c1, c2, i, j;
```
- This is the main function of the program. It begins by declaring several integer variables used to store the dimensions of matrices A and B (`r1`, `r2`, `c1`, `c2`), as well as loop counters (`i`, `j`).

```c
    printf("\nEnter the no. of rows and columns of matrix A: \n");
    scanf("%d%d", &r1, &c1);
```
- The program prompts the user to enter the number of rows and columns for matrix A and stores the values in `r1` and `c1`, respectively.

```c
    int matA[r1][c1];
```
- An integer array `matA` with dimensions specified by `r1` and `c1` is declared to store matrix A.

```c
    printf("\nEnter the elements of matrix A: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\tA[%d][%d]= ", i, j);
            scanf("%d", &matA[i][j]);
        }
        printf("\n");
    }
```
- The program then prompts the user to input the elements of matrix A, one element at a time, and stores them in the `matA` array.

```c
    printf("\nmatrix A= \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\t%d", matA[i][j]);
        }
        printf("\n");
    }
```
- After input, the program displays the contents of matrix A for verification.

```c
    // Similar input and display code is repeated for matrix B with variables r2, c2, and matB.
```

```c
    // Matrix Addition
    if (r1 == r2 && c1 == c2)
    {
        int sum[r1][c1];
```
- The program checks if matrix addition is possible by comparing the dimensions of matrices A and B. If they have the same number of rows (`r1 == r2`) and the same number of columns (`c1 == c2`), addition is possible.

```c
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                sum[i][j] = matA[i][j] + matB[i][j];
            }
        }
```
- If addition is possible, a new matrix `sum` is declared with the same dimensions as matrices A and B. The program then performs element-wise addition and stores the result in the `sum` matrix.

```c
        printf("\nSum matrix:: \n");
        printf("addition=\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("\t%d + %d", matA[i][j], matB[i][j]);
            }
            printf("\n");
        }

        printf("\nequals to=\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("\t%d", sum[i][j]);
            }
            printf("\n");
        }
    }
```
- The program then displays the addition process, showing the element-wise addition of matrix A and matrix B, followed by the resulting sum matrix.

```c
    else
    {
        printf("Addition is not possible since r1 != r2 and c1 != c2.");
    }
    getch();
}
```
- If matrix addition is not possible due to mismatched dimensions, the program prints a message indicating that addition is not possible.

- Finally, the `getch()` function is used to wait for a key press before the program exits.

This program demonstrates the addition of two matrices and includes input validation to check whether addition is possible based on the dimensions of the matrices.
