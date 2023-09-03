#include <iostream>
using namespace std;

/*
Inverted Full Pyramid

for n rows:

* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *


*/

int main()
{
    int n;
    cout << "Give number of rows: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < n-i; j++)
        {
            cout<<"* ";                        
        }
        cout << endl;
    }
}