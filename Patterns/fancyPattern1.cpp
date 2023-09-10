/*

********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
***6*6*6*6*6*6***
**7*7*7*7*7*7*7**
*8*8*8*8*8*8*8*8*


*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Give number of rows: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout<<"*";
        }
        
        for (int k = 0; k < (2*i) + 1; k++)
        {
            if (k % 2 == 0)
            {
               cout<<i + 1;
            }
            else
            {
                cout<<"*";
            }
        }

        for (int j = 0; j < n - i; j++)
        {
            cout<<"*";
        }
        
    cout<<endl;
    }
}