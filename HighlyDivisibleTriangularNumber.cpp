#include <iostream>
using namespace std;

int NumberOfDivisors(long long int);

int main()
{
    long long int i = 1;
    while(NumberOfDivisors(i) <= 500)
        i += i+1;

    cout << i << endl;

    return 0;
}

int NumberOfDivisors(long long int n)
{
    int count = 0;
    for(long long int i = 1; i <= n; i++)
    {
        if(n%i == 0)
            count++;
    }

    return count;
}
