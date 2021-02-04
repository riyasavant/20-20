#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

struct point
{
    float x;
    float y;
};

struct rectangle
{
    struct point p[3];
    float area;
};

int inputSize()
{
    int n;
    cout << "Enter the number of rectangles: ";
    cin >> n;
    return n;
}

// Single input
// struct rectangle inputCoordinates()
// {
//     struct rectangle r;
//     cout << "Enter the coordinates:\n";
//     scanf("%f %f %f %f %f %f", &r.p[0].x, &r.p[0].y, &r.p[1].x, &r.p[1].y, &r.p[2].x, &r.p[2].y);
//     return r;
// }

// Array of Inputs

void inputPoints(int n, struct rectangle r[])
{
    cout << "Enter three points for each rectangle\n";
    for (int i = 0; i < n; i++)
    {
        printf("Rectangle %d: ", i + 1);
        scanf("%f %f %f %f %f %f", &r[i].p[0].x, &r[i].p[0].y, &r[i].p[1].x, &r[i].p[1].y, &r[i].p[2].x, &r[i].p[2].y);
    }
}

float computeDistance(struct point p1, struct point p2)
{
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    ;
}

// Calculating area of single rectangle
// float computeArea(struct rectangle r)
// {
//     float length = computeDistance(r.p[0], r.p[1]);
//     float breadth = computeDistance(r.p[0], r.p[2]);
//     return length * breadth;
// }

// Calculating area of array of rectangles
void computeArea(int n, struct rectangle r[])
{
    float length, breadth, diagonal;
    for (int i = 0; i < n; i++)
    {
        length = computeDistance(r[i].p[1], r[i].p[2]);
        breadth = computeDistance(r[i].p[0], r[i].p[1]);
        diagonal = computeDistance(r[i].p[0], r[i].p[2]);

        if (length <= diagonal && breadth <= diagonal)
        {
            r[i].area = length * breadth;
        }
        else if (diagonal <= length && breadth <= length)
        {
            r[i].area = diagonal * breadth;
        }
        else if (diagonal <= breadth && length <= breadth)
        {
            r[i].area = diagonal * length;
        }
    }
}

void output(int n, struct rectangle r[])
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Area of rectangle with vertices (%.1f, %.1f), (%.1f, %.1f), (%.1f, %.1f) is %.1f\n", r[i].p[0].x, r[i].p[0].y, r[i].p[1].x, r[i].p[1].y, r[i].p[2].x, r[i].p[2].y, r[i].area);
    }
}

int main()
{
    int n;
    n = inputSize();
    struct rectangle r[n];

    inputPoints(n, r);
    computeArea(n, r);
    output(n, r);

    // Taking one input at a time
    // while (n > 0)
    // {
    //     struct rectangle r;
    //     r = inputCoordinates();
    //     printf("Area: %.1f\n", computeArea(r));
    //     n--;
    // }

    return 0;
}