#include <iostream>

using namespace std;

bool PrimeCheck(long long);

int main()
{
    long long largest = 1;
    long long max = 600851475143;

    for(long long i = 1; i < max/largest; i++)
    {
        if(max%i == 0)
        {
            if(PrimeCheck(i))
            {
                largest = i;
                cout << i << endl;
            }
        }
    }

    cout << "Largest prime factor is: " << largest << endl;

    return 0;
}

bool PrimeCheck(long long n)
{
    if(n == 2)
        return true;
    if(n == 1 || n%2 == 0)
        return false;

    for(long long i = 3; i < n; i += 2)
        if(n%i == 0)
            return false;

    return true;
}
