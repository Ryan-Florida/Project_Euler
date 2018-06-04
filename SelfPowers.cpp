#include <iostream>

using namespace std;

long long Power(int);

int main()
{
    long long sum = 0;
    for(int i = 1; i <= 1000; i++)
    {
        sum += Power(i);
        sum %= 10000000000;
    }

    cout << sum << endl;

    return 0;
}

long long Power(int n)
{
    long long m = n;
    for(int i = 1; i < n; i++)
    {
        m *= n;
        m %= 10000000000;
    }

    return m;
}
