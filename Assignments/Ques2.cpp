#include <iostream>
using namespace std;
int main() {
    int radius;
    const float pi = 3.14;
    cin >> radius;
    float area = pi * radius * radius;
    cout << "Area: " << area << endl;
    return 0;
}
