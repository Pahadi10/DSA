#include <iostream>
using namespace std;

/*
Half Pyramid

for n rows:

*
* *
* * *
* * * *
* * * * *

*/

int main()
{
    int n;
    cout << "Give number of rows: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}