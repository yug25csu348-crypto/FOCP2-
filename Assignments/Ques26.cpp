#include<iostream>
using namespace std;

int main(){
    int arr[5];
    float total = 0;
    cout << "Enter 5 integers:" << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        total += arr[i];
        cout << arr[i] << " ";
    }
    
    cout << "You entered:" << endl;
    
    float avg = total / 5;
    cout << "\nTotal is: " << total << endl;
    cout << "\nAverage is: " << avg << endl;

}
