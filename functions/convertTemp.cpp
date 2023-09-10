// Write a function to convert temperature from celsius to Kelvin and farnehite

#include <iostream>
#include <vector>
using namespace std;

    vector<double> convertTemperature(double celsius) {
        vector<double> ans(2);
        ans[0] = celsius + 273.15;
        ans[1] = celsius * 1.80 + 32.00;

        return ans;
    }

int main() {
    double celsius;
    cout << "Give the temperature in Celsius: ";

    cin >> celsius;

    vector<double> result = convertTemperature(celsius);

    cout << "Kelvin: " << result[0] << endl;
    cout << "Fahrenheit: " << result[1] << endl;

    return 0;
}
