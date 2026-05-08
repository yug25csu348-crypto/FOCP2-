#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter integers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    // Swapping logic
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    // using arithmetic operations
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping again using arithmetic: a = " << a << ", b = " << b << endl;

    return 0;
}
