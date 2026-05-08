#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int division(int a, int b){
    if(b == 0){
        cout << "Error: Division by zero is not allowed." << endl;
        return 0; // Return 0 or you can choose to handle it differently
    }
    return a / b;
}

int main(){
    int a,b;
    int operation;
    cout << "Enter two positive integers: ";
    cin >> a >> b;

    cout << "Choose an operation: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> operation;

    switch(operation){
        case 1:
            cout << "Result: " << add(a,b) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(a,b) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(a,b) << endl;
            break;
        case 4:
            cout << "Result: " << division(a,b) << endl;
            break;
        default:
            cout << "Invalid operation selected." << endl;
    }

    return 0;
}
