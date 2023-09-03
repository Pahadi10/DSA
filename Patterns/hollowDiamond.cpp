
/*

   * 
  * * 
 *   * 
*     * 
*     * 
 *   * 
  * * 
   * 

*/

#include <iostream>
using namespace std;


int main()
{
   int num;
    cout << "Give number of rows: " << endl;
    cin >> num;
    int n = num/2; 
    cout << endl;
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
}