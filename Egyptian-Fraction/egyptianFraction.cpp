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

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return gcd(y, x % y);
}

int lcm(int n, struct fraction f[])
{
    int LCM = f[0].denominator;
    for (int i = 1; i < n; i++)
    {
        LCM = (LCM * f[i].denominator) / gcd(f[i].denominator, LCM);
    }

    return LCM;
}

struct fraction calculateSum(int m, struct fraction f[])
{
    struct fraction result;
    int LCM = lcm(m, f);
    int numerator = 0;
    for (int i = 0; i < m; i++)
    {
        numerator += (LCM / f[i].denominator);
    }

    int GCD = gcd(numerator, LCM);
    result.numerator = numerator / GCD;
    result.denominator = LCM / GCD;
    return result;
}

void egyptianFraction(int n, struct fraction result[])
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

        result[i] = calculateSum(m, f);
    }
}

void output(int n, struct fraction result[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d/%d\n", result[i].numerator, result[i].denominator);
    }
}

int main()
{
    int n;
    n = inputSize();
    struct fraction result[n];
    egyptianFraction(n, result);
    output(n, result);
    return 0;
}