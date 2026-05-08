#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter positive integer: ";
    cin >> n;

    int lagrgest = 0;
    while (n--)
    {
        int temp;
        cout << "Enter the number: ";
        cin >> temp;
        if(temp > lagrgest || lagrgest == 0){
            lagrgest = temp;
        }
    }
    cout << "The Largest number is: " << lagrgest << endl;
    return 0;
    
}
