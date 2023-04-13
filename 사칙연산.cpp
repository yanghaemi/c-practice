#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

float Sum(float a[5])
{
    return a[0] + a[1] + a[2] + a[3] + a[4];
}
float Mean(float a[5])
{
    float mean = Sum(a) / 5;
    return mean;
}
float Min(float a[5])
{
    float min = 999999;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
}
float Max(float a[5])
{
    float max = -999999;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

int main()
{
    cout << "�Է� ���� �� :  ";
    float a[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    const char *answer = "Mean : %.1f, Sum : %.1f, Min : %.1f, Max : %.1f\n";
    printf(answer, round(Mean(a) * 10) / 10, round(Sum(a) * 10) / 10, round(Min(a) * 10) / 10, round(Max(a) * 10) / 10);
}
