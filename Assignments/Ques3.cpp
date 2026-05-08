#include <iostream>
using namespace std;
int main() {
    int temperature;
    cout << "Enter temperature in °C: ";
    cin >> temperature;
    float fehrenheit = (temperature * 9.0 / 5.0) + 32;
    cout << "Fahrenheit: " << fehrenheit << endl;
    return 0;
}
