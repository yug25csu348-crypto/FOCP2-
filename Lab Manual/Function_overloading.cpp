#include<iostream>
using namespace std;

void car(){
    cout << "This is a car." << endl;
}

void car(string color){
    cout << "This is a " << color << " car." << endl;
}

void car(string color, string brand){
    cout << "This is a " << color << " " << brand << " car." << endl;
}

int main(){
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    car();
    car("Blue");
    car("Black", "BMW");
    
}
