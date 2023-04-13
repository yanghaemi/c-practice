#include <iostream>
using namespace std;
#define NUMBER_TOTAL_SIZE 10

int number[NUMBER_TOTAL_SIZE] = {2, 4, 3, 5, 7, 6, 8, 9, 0};

void sorting() // 선택정렬
{
    int min, idx;
    int temp = 0;
    for (int i = 0; i < NUMBER_TOTAL_SIZE; i++)
    {
        min = 9999;

        for (int j = i; j < NUMBER_TOTAL_SIZE; j++)
        {
            if (min > number[j])
            {
                min = number[j];
                idx = j;
            }
        }

        temp = number[idx];
        number[idx] = number[i];
        number[i] = temp;
    }
}

void add() // 숫자 삽입
{
    for (int i = 0; i < NUMBER_TOTAL_SIZE; i++)
    {
        if (number[i] != i)
        {

            number[i] = i;
        }
        sorting();
        }
}

int main()
{

    sorting();
    add();
    sorting();
    for (int i = 0; i < NUMBER_TOTAL_SIZE; i++)
    {

        printf("%d ", number[i]);
    } // 결과 출력
}
