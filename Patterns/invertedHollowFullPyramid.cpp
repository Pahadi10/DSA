#include <iostream>
using namespace std;

/*
Inverted Hollow Full Pyramid

for n rows:
0 1 2 3 4 5 

* * * * * * 0
 *       *  1
  *     *   2
   *   *    3
    * *     4
     *      5


*         *
 *       *
  *     *
   *   *
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
            if (i ==0 || j == 0 || j == n-i-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
                                    
        }
        cout << endl;
    }


    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < n-i; j++)
        {
            if (j == 0 || j == n-i-1)
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