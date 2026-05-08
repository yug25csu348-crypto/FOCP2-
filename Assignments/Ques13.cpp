#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    int D = b * b - 4 * a * c;
    if(D > 0){
        cout << "Roots are real and different." << endl;
        int root1 = (-b + sqrt(D)) / (2 * a);
        int root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if(D == 0){
        cout << "Roots are real and same." << endl;
        int root = -b / (2 * a);
        cout << "Root: " << root << endl;
    } else {
        cout << "Roots are complex and different." << endl;
        float realPart = -b / (2.0 * a);
        float imagPart = sqrt(-D) / (2.0 * a);
        cout << "Root 1: " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imagPart << "i" << endl;
    }


}
