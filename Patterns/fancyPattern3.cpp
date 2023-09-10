
/*

i = 7

*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*


i = 9

* 
* 1 * 
* 1 2 1 * 
* 1 2 3 2 1 * 
* 1 2 3 4 3 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*


i = 11

* 
* 1 * 
* 1 2 1 * 
* 1 2 3 2 1 * 
* 1 2 3 4 3 2 1 * 
* 1 2 3 4 5 4 3 2 1 * 
* 1 2 3 4 3 2 1 * 
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*

*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Give number of rows: " << endl;
    cin >> num;
    cout << endl;
    int count;
    int n = num / 2;
    
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
            {
                cout<<"* ";
            }
            else
            {
                cout<< j <<" ";
            }
            count = j;
        }

        for (int k = 0; k < i; k++)
        {
            if (k == i - 1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<--count<<" ";
            }
            
        } 

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (j == 0)
            {
                cout<<"* ";
            }
            else
            {
                cout<< j <<" ";
            }
            count = j;
        }

        for (int k = 0; k < n - i - 1; k++)
        {
            if (k == n - 2 - i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<--count<<" ";
            }
            
        } 
        
        cout<<endl;
    }
    
}