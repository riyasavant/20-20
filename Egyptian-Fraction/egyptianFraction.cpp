#include <iostream>
#include <stdio.h>
using namespace std;

struct fraction
{
    int numerator, denominator;
};

struct egyptianFraction
{
    int numberOfFractions;
    struct fraction f[];
};

int inputSize()
{
    int n;
    cout << "Enter the number of Instances: ";
    cin >> n;
    return n;
}

void inputFractions(int n, struct egyptianFraction e[])
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        e[i].numberOfFractions = m;
        for (int j = 0; j < m; j++)
        {
            e[i].f[j].numerator = 1;
            scanf("%f", &e[i].f[j].denominator);
        }
    }
}

int main()
{
    int n;
    n = inputSize();
    struct egyptianFraction e[n];

    inputFractions(n, e);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e[i].numberOfFractions; j++)
        {
            printf("%f", e[i].f[j].denominator);
        }
    }

    return 0;
}