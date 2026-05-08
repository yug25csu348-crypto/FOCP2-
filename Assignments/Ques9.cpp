#include <iostream>
using namespace std;
#include <string>


int main() {
    char input;
    cout << "Enter anything: ";
    cin >> input;

    if(input >= '0' && input <= '9') {
        cout << "Integer" << endl;
        return 0;
    }

    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' ||
        input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U') {
        cout << "Vowel" << endl;
    } else {
        cout << "Consonant" << endl;
    }
    return 0;
}
    
