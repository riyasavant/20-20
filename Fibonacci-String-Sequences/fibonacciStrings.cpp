#include <iostream>
using namespace std;

struct fibonacci
{
    string s;
};

int inputInstances()
{
    int n;
    cout << "Enter the number of instances: ";
    cin >> n;
    return n;
}

void generateFibonacci(int m, struct fibonacci f[])
{
    for (int i = 2; i < m; i++)
    {
        f[i].s = f[i - 2].s + f[i - 1].s;
    }
}

void output(int m, struct fibonacci f[])
{
    cout << "--------------------" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << f[i].s << endl;
    }
    cout << "--------------------" << endl;
}

int main()
{
    int n;
    n = inputInstances();

    while (n > 0)
    {
        int m;
        cout << "Range of Fibonacci: ";
        cin >> m;
        struct fibonacci f[m];
        cout << "First term: ";
        cin >> f[0].s;
        cout << "Second term: ";
        cin >> f[1].s;
        generateFibonacci(m, f);
        output(m, f);
        n--;
    }
    return 0;
}