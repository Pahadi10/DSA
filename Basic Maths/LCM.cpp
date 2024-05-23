#include <iostream>
using namespace std;

// Formula => (HCF x LCM) = (a x b)

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

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int x, y;
    cout << "Give 1st number: ";
    cin >> x;
    cout << "Give 2nd number: ";
    cin >> y;

    cout << "LCM: " << findLCM(x, y);
    cout<<endl;
}
