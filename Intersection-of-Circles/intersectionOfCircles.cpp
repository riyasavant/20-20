#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

struct point
{
    float x, y;
};

struct circle
{
    float radius;
    struct point p;
};

// We need two circles to check for intersection
struct intersection
{
    struct circle c[2];
    string result;
};

int inputInstances()
{
    int n;
    cout << "Enter the number of instances: ";
    cin >> n;
    return n;
}

void inputDetails(int n, struct intersection i[])
{
    for (int j = 0; j < n; j++)
    {
        scanf("%f %f %f %f %f %f", &i[j].c[0].radius, &i[j].c[0].p.x, &i[j].c[0].p.y, &i[j].c[1].radius, &i[j].c[1].p.x, &i[j].c[1].p.y);
    }
}

float computeDistance(struct point p1, struct point p2)
{
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

void checkIntersection(int n, struct intersection i[])
{
    float c1c2, r1r2;
    for (int j = 0; j < n; j++)
    {
        c1c2 = computeDistance(i[j].c[0].p, i[j].c[1].p);
        r1r2 = i[j].c[0].radius + i[j].c[1].radius;

        if (r1r2 >= c1c2 && c1c2 > (i[j].c[0].radius - i[j].c[1].radius))
        {
            i[j].result = "The circles intersect.";
        }
        else
        {
            i[j].result = "The circles do not intersect.";
        }
    }
}

void output(int n, struct intersection i[])
{
    for (int j = 0; j < n; j++)
    {
        cout << i[j].result << endl;
    }
}

int main()
{
    int n;
    n = inputInstances();
    struct intersection i[n];

    inputDetails(n, i);
    checkIntersection(n, i);
    output(n, i);

    return 0;
}