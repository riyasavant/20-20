#include <iostream>
#include <stdio.h>
using namespace std;

struct fraction
{
    int numerator, denominator;
};

int inputSize()
{
    int n;
    cout << "Enter the number of Instances: ";
    cin >> n;
    return n;
}

void output(int m, struct fraction f[])
{
    for (int j = 0; j < m; j++)
    {
        printf("1/%d\n", f[j].denominator);
    }
}

void egyptianFraction(int n)
{
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        struct fraction f[m];
        for (int j = 0; j < m; j++)
        {
            f[j].numerator = 1;
            scanf("%d", &f[j].denominator);
        }

        output(m, f);
    }
}

int main()
{
    int n;
    n = inputSize();
    egyptianFraction(n);
    return 0;
}