/*

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1


*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Give number of rows: " << endl;
  cin >> n;
  cout << endl;

  for (int i = 0; i < n; i++)
  {
      int count1 = 1;
    for (int j = 0; j <n-(i+1) ; j++)
    {
      cout<<"  ";
    }
    for (int k = 0; k < i + 1; k++)
    {
      cout<<count1<<" ";
      count1++;
    }
    for (int l = i; l > 0; l--)
    {
      cout<<l<<" ";
    }
    
  cout<<endl;  
  }
  
}