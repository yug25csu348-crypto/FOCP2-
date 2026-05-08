#include <iostream>
using namespace std;

int main(){
    int base, height, hypotenuse;

    cout << "enter base of the right triangle: ";
    cin >> base;
    cout << "enter height of the right triangle: ";
    cin >> height;
    cout << "enter hypotenuse of the right triangle: ";
    cin >> hypotenuse;

    if((base * base + height * height) == (hypotenuse * hypotenuse)){
        cout << "The triangle is a right triangle." << endl;
    } else {
        cout << "The triangle is not a right triangle." << endl;
    }

    if (base == height || height == hypotenuse || base == hypotenuse)
    {
        cout << "The triangle is an isosceles triangle." << endl;
    }

    if (base == height && height == hypotenuse)
    {
        cout << "The triangle is an equilateral triangle." << endl;
    }
    
    return 0;
}
