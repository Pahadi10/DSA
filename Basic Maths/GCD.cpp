#include <iostream>
using namespace std;

int findGCD(int x, int y){
while (x > 0 && y > 0)
{
    if (x > y)
    {
        x = x - y;
    }
    else
    {
        y = y - x;
    }
}

    return x == 0 ? y : x;
}

int main()
{
    int x, y;
   cout<<"Give 1st number: ";
   cin>>x;
   cout<<"Give 2nd number: ";
   cin>>y;

   cout<< findGCD(x,y);
}