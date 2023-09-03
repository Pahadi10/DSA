#include <iostream>
using namespace std;

/*

for n rows:

A 
A B A
A B C B A
A B C D C B A
A B C D E D C B A

*/

int main()
{
    int n;
    cout << "Give number of rows: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        char ch;
        for (int j = 0; j < i+1; j++)
        {
            int num = j + 1;
            ch = num + 'A' -1 ;
            cout<<ch<<" ";
        }

        for (char alphabet = ch; alphabet >'A';)
        {
            alphabet--;
            cout<<alphabet<<" ";
        }
        
        cout<<endl;
    }
    
}