/*

1
2 * 3
4 * 5 * 6
7 * 8 * 9 * 10
7 * 8 * 9 * 10
4 * 5 * 6
2 * 3
1

*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Give number of rows: " << endl;
    cin >> num;
    cout << endl;

    int n = num / 2;
    int count = 1;
    
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < (2 * i) + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << count++ <<" ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }


    int start = count - n;
    for (int i = 0; i < n; i++)
    {
            int k = start;
        for (int j = 0; j < (2 * n)- (2 * i) - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << k++ <<" ";
            }
            else
            {
                cout << "* ";
            }
        }
        start = start - (n - i - 1);

        cout << endl;
    }
}