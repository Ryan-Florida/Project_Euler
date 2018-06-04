#include <iostream>

using namespace std;

bool IsPrime(int );

int main()
{
    int count = 1;

    for(int i = 0; count <= 10001; i++)
        if(IsPrime(i))
        {
            cout << count << " : " << i << endl;
            count++;
        }
}

bool IsPrime(int n)
{
    if(n == 2)
        return true;
    if(n == 1 || n%2 == 0)
        return false;
    for(int i = 3; i < n/2; i += 2)
        if(n%i == 0)
            return false;

    return true;
}
