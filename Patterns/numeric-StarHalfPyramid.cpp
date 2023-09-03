#include <iostream>
using namespace std;

/*

for n rows

1
2 * 2
3 * 3 * 3
4 * 4 * 4 * 4


1
2 * 2
3 * 3 * 3
4 * 4 * 4 * 4
3 * 3 * 3
2 * 2
1


*/

int main()
{
    // First Pattern

    // int n;
    // cout << "Give number of rows: " << endl;
    // cin >> n;
    // cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2 * i + 1; j++)
    //     {
    //         if (j % 2 == 0)
    //         {
    //             cout<<i + 1<<" ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Second Pattern

    int n;
    cout << "Give number of rows: " << endl;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << i + 1 << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for (int k = n - 1; k > 0; k--)
    {
        for (int l = 0; l < 2 * k - 1; l++)
        {
            if (l % 2 == 0)
            {
                cout << k << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
