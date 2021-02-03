#include <iostream>
#include <stdio.h>
using namespace std;

struct coordinate
{
    float x;
    float y;
};

struct rectangle
{
    struct coordinate p[3];
};

struct rectangle inputCoordinates()
{
    struct rectangle r;
    cout << "Enter the coordinates:\n";
    scanf("%f %f %f %f %f %f", &r.p[0].x, &r.p[0].y, &r.p[1].x, &r.p[1].y, &r.p[2].x, &r.p[2].y);
    return r;
}

int inputSize()
{
    int n;
    cout << "Enter the number of rectangles: ";
    cin >> n;
    return n;
}

int main()
{
    int n;
    n = inputSize();
    while (n > 0)
    {
        struct rectangle r;
        r = inputCoordinates();
        for (int i = 0; i < 3; i++)
        {
            printf("(%.1f %.1f)", r.p[i].x, r.p[i].y);
        }
        n--;
    }
    return 0;
}