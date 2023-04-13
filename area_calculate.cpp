#include <iostream>
#include <cmath>
using namespace std;

float areaTri()
{
    int x[3];
    int y[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the point of " << i + 1 << " : " << endl;
        cin >> x[i];
        cin >> y[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "(" << x[i] << "," << y[i] << ")" << endl;
    }

    float a, b, c = 0; // 변 길이

    a = sqrt(pow((x[0] - x[1]), 2) + pow((y[0] - y[1]), 2));
    b = sqrt(pow((x[1] - x[2]), 2) + pow((y[1] - y[2]), 2));
    c = sqrt(pow((x[2] - x[0]), 2) + pow((y[2] - y[0]), 2));

    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c)); // 헤론의 공식

    cout << "area of triangle : " << area << endl;
}

float areaSquare()
{
    int x[4];
    int y[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the point of " << i + 1 << " : " << endl;
        cin >> x[i];
        cin >> y[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "(" << x[i] << "," << y[i] << ")" << endl;
    }

    float a, b, c, d = 0; // 변 길이

    a = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2));

    float area = pow(a, 2);

    cout << "area of square : " << area << endl;
}

int main()
{

    int n = 0;

    cout << "Enter the number : " << endl;
    // 삼각형인지 사각형인지
    cin >> n;

    if (n == 3)
        areaTri(); // 삼각형일 때

    else if (n == 4) // 사각형일 때
        areaSquare();
    else
    {
        cout << "wrong input" << endl;
    }
}
