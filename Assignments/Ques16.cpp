#include<iostream>
using namespace std;
int main () {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int prime = 1;
    for (int i = 2; i < x; i++)
    {
        if (x%i == 0)
        {
            prime = 0;
            break;
        }
        
    }
    if (prime == 1)
    {
        cout << "The number is prime." << endl;
    }
    else
    {
        cout << "The number is not prime." << endl;
    }
    
}
