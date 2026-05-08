#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 5 == 0 && number % 3 == 0)
    {
        cout << "Fizz Buzz" << endl;
    }
    
    if (number % 3 == 0){
        cout << "Buzz" << endl;
    }else if (number % 5 == 0){
        cout << "Fuzz" << endl;
    }

    return 0;
}
    
    
