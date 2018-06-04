#include <iostream>

using namespace std;

int fib(int n);

int main()
{
    int a,
        sum = 0;

    for(int i = 0; i < 100; i++)
    {
        a = fib(i);
        if(a%2 == 0 && a < 4000000)
            sum += a;
        if(a >= 4000000)
            break;
    }

    cout << sum;
    return 0;
}

int fib(int n)
{
    if(n == 0 || n == 1)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}
