// Write a function to get area of a circle 

#include <iostream>
#include <cmath>

using namespace std;

float areaOfCircle(int r){
    float area = M_PI*(r)*(r);
    return area;
}

int main()
{
    int radius;
    cout<<"Give radius of the circle: ";
    cin>>radius;
    cout<<"Area of Circle is: "<<areaOfCircle(radius);
}