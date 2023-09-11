#include <stdio.h>
#include <conio.h>
void main()
{
    int r1, r2, c1, c2, i, j;
    printf("\nEnter the no. of rows and columns of matrix A: \n");
    scanf("%d%d", &r1, &c1);
    int matA[r1][c1];
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
    printf("\nmatrix A= \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\t%d", matA[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the no. of rows and columns of matrix B: \n");
    scanf("%d%d", &r2, &c2);
    int matB[r2][c2];
    printf("\nEnter the elements of matrix A: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("\tB[%d][%d]= ", i, j);
            scanf("%d", &matB[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix B= \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\t%d", matB[i][j]);
        }
        printf("\n");
    }

    // Addtion
    if (r1 == r2 && c1 == c2)
    {
        int sum[r1][c1];
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                sum[i][j] = matA[i][j] + matB[i][j];
            }
        }

        printf("\nSum matrix:: \n");
        printf("addition=\n") for (i = 0; i < r1; i++)
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
    else
    {
        printf("Addition is not possible since r1!=r2 and c1!=c2.");
    }
    getch();
}