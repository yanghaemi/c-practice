#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int row, col;

    printf("task 2-1\n");

    cout << "Enter the number of row" << endl;
    cin >> row;
    cout << "Enter the number of column" << endl;
    cin >> col;

    int arr[10][10];

    int n = 0;

    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= row; j++)
        {

            cin >> n;
            arr[i][j] = n;
        }
    } // 배열 입력

    int narr[10][10];

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            narr[i][j] = arr[j][i];
        }
    }
    printf("transposed matrix>>\n");

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ", narr[i][j]);
        }
        printf("\n");
    }

    printf("task 2-2\n");

    int A[10][10];
    int B[10][10];

    int arow = 0;
    int acol = 0;

    int brow = 0;
    int bcol = 0;

    cout << "Enter the number of A matrix row" << endl;
    cin >> arow;
    cout << "Enter the number of A matrix column" << endl;
    cin >> acol;

    int nn = 0;

    printf("Enter the A matrix>>\n");

    for (int i = 1; i <= acol; i++)
    {
        for (int j = 1; j <= arow; j++)
        {
            cin >> nn;
            A[i][j] = nn;
        }
    }

    cout << "Enter the number of B matrix row" << endl;
    cin >> brow;
    cout << "Enter the number of B matrix column" << endl;
    cin >> bcol;

    if (acol != brow)
    {
        printf("Can't multiply");
        return 0;
    }

    printf("Enter the B matrix>>\n");
    for (int i = 1; i <= bcol; i++)
    {
        for (int j = 1; j <= brow; j++)
        {
            cin >> nn;
            B[i][j] = nn;
        }
    }

    int res[10][10];

    int m = 0; // 더한 거 넣는 임시 변수
    for (int i = 1; i <= acol; i++)
    {

        for (int k = 1; k <= brow; k++)
        {
            for (int l = 1; l <= bcol; l++)
            {
                m += A[i][l] * B[l][k];
            }
            res[i][k] = m;
            m = 0;
        }
    }

    printf(">>\n");

    for (int i = 1; i <= acol; i++)
    {
        for (int j = 1; j <= brow; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
