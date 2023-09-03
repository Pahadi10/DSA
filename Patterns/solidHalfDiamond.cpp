/*

*
* *
* * *
* * * *
* * *
* * 
*

*/

#include <iostream>
using namespace std;


int main()
{
   int n;
   cout<<"Give number of rows: "<<endl;
   cin>>n;

   for (int i = 0; i < (n/2) + 1; i++)
   {
    for (int j = 0; j < i + 1; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
   }
   
   for (int i = (n/2); i > 0; i--)
   {
    for (int j = 0; j < i ; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
   }
   
}