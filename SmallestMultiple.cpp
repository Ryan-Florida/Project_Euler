#include <iostream>

using namespace std;

bool IsPrime(int);

int main()
{
    int product = 1;

    for(int i = 2; i < 20; i++)
        if(IsPrime(i))
        {
            if(i*i*i*i < 20)
                product *= i*i*i*i;
            else if(i*i*i < 20)
                product *= i*i*i;
            else if(i*i < 20)
                product *= i*i;
            else
                product *= i;
        }

    cout << product << endl;

    return 0;
}

bool IsPrime(int n)
{
    if(n == 2)
        return true;
    if(n == 1 || n%2 == 0)
        return false;
    for(int i = 3; i < n/2; i++)
        if(n%i == 0)
            return false;

    return true;
}
