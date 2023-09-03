#include <iostream>
using namespace std;

/*

for n rows:

1 
1 2
1   3
1     4
1 2 3 4 5


*/

int main()
{
    int n;
    cout << "Give number of rows: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
         if (j == i || j == 0 || i == n-1)
         {
            cout<<j+1<<" ";
         }
         else
         {
            cout<<"  ";
         }
         
         
        }
        cout<<endl;
    }
    
}