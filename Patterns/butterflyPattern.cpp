/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *


*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Give number of rows: " << endl;
    cin >> n;
    int num = n/2;
    cout << endl;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <i+1 ; j++)
        {
            cout<<"*";
        }

        for (int j = 0; j < (2*num)-(2*i)-2; j++)
        {
            cout<<" ";
        }
        
        for (int l = 0; l <i+1 ; l++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <num-i ; j++)
        {
            cout<<"*";
        }

        for (int j = 0; j < (2*i); j++)
        {
            cout<<" ";
        }
        
        for (int l = 0; l <num-i ; l++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}