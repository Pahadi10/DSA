#include <iostream>
using namespace std;

/*
Hollow Full Pyramid

for n rows:

     *
    * *
   *   *
  *     *
 *       *
* * * * * *


     *
    * *
   *   *
  *     *
 *       *
*         *



*/

int main()
{
    int n;
    cout << "Give number of rows: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n-i-1; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < i+1; j++)
        {
            if (j == 0 || j == i || i == n-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
                                    
        }
        cout << endl;
    }

    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n-i-1; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < i+1; j++)
        {
            if (j == 0 || j == i)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
                                    
        }
        cout << endl;
    }

    cout<<endl;
}