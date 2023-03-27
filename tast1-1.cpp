#include <stdio.h>
#include <iostream>

using namespace std;

int SumMatrix(int ***A, int ***B)
{
    int res[3][5][4];

    int i, j, k;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                res[i][j][k] = A[i][j][k] + B[i][j][k];
            }
        }
    }

    printf("sum of matrixs >>\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                printf("%d ", res[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main()
{
    int i, j, k;

    printf("task 1-1\n");
    int ***A = (int ***)malloc(sizeof(int **) * 3);
    for (i = 0; i < 3; i++)
    {
        A[i] = (int **)malloc(sizeof(int *) * 5);
        for (j = 0; j < 5; j++)
        {
            A[i][j] = (int *)malloc(sizeof(int) * 4);
        }
    }

    int ***B = (int ***)malloc(sizeof(int **) * 3);
    for (i = 0; i < 3; i++)
    {
        B[i] = (int **)malloc(sizeof(int *) * 5);
        for (j = 0; j < 5; j++)
        {
            B[i][j] = (int *)malloc(sizeof(int) * 4);
        }
    }

    printf("Enter the A matrix>>\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                cin >> A[i][j][k];
            }
        }
    }

    printf("Enter the B matrix>>\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                cin >> B[i][j][k];
            }
        }
    }

    printf("A matrix >>\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                printf("%d ", A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("B matrix >>\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                printf("%d ", B[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    SumMatrix(A, B);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            free(A[i][j]);
        }
        free(A[i]);
    }
    free(A);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            free(B[i][j]);
        }
        free(B[i]);
    }
    free(B);

    return 0;
}