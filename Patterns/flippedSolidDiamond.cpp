#include <iostream>
using namespace std;

/*

***** *****
****   ****
***     ***
**       **
*         *
*         *
**       **
***     ***
****   ****
***** ***** 

*/


int main()
{
    int num;
    cout << "Give number of rows: " << endl;
    cin >> num;
    int n = num/2; 
    cout << endl;

        for (int i = 0; i < n; i++)
    {
        // TOP left inverted half pyramid

        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }

        // Middle blank full pyramid

        for (int k = 0; k < (2*i) + 1; k++)
        {
            cout<<" ";                        
        }

         // TOP right inverted half pyramid

        for (int l = 0; l < n-i; l++)
        {
            cout << "*";
        }
        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {

        //Bottom left half pyramid
        
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }

        // Middle blank inverted full pyramid

        for (int k = 0; k < n - 2*i + 4; k++)
        {
            cout<<" ";                        
        }

         // Bottom right half pyramid

        for (int l = 0; l < i+1; l++)
        {
            cout << "*";
        }

        cout<<endl;
    }
    
}
