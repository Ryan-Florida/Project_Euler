#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream myIn;
    myIn.open("p022_names.txt");

    string array[5000];

    for(int i = 0; i < 5000; i++)
    {
        myIn >> array[i];
        cout << array[i] << endl;
    }


    myIn.close();
    return 0;
}
