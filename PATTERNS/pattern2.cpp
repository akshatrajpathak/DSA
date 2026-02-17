#include <iostream>
using namespace std;

int main()
{
    char dh = 'A';
    int n = 4;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            cout << dh;
            dh = dh + 1;
        }
        cout << endl;
    }
    return 0;
}   