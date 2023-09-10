// Write a function to convert kilo meters to miles

#include <iostream>
using namespace std;

float convert(int km){
    float miles = km * 0.621371;

    return miles;
}

int main(){
    int km;
    cout<<"Give kiloMeters to convert in miles: ";
    cin>>km;

    cout<<"In "<< km<<" Kilo meters, there are " <<convert(km)<<" miles";

}