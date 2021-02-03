#include <iostream>
#include <stdio.h>
#include <math.h>
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

int inputSize()
{
    int n;
    cout << "Enter the number of rectangles: ";
    cin >> n;
    return n;
}
struct rectangle inputCoordinates()
{
    struct rectangle r;
    cout << "Enter the coordinates:\n";
    scanf("%f %f %f %f %f %f", &r.p[0].x, &r.p[0].y, &r.p[1].x, &r.p[1].y, &r.p[2].x, &r.p[2].y);
    return r;
}

int computeDistance(struct coordinate p1, struct coordinate p2)
{
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

float computeArea(struct rectangle r)
{
    float length = computeDistance(r.p[0], r.p[1]);
    float breadth = computeDistance(r.p[0], r.p[2]);
    return length * breadth;
}

int main()
{
    int n;
    n = inputSize();
    while (n > 0)
    {
        struct rectangle r;
        r = inputCoordinates();
        printf("Area: %.1f\n", computeArea(r));
        n--;
    }
    return 0;
}