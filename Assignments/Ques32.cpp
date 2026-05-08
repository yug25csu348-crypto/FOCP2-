#include <iostream>
using namespace std;

int main (){
    int arr[5];
    int largest = 0, second_largest = 0;
    cout << "Enter 5 integers:" << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] < largest){
            second_largest = arr[i];
        }
    }
    cout << "Second largest number: " << second_largest << endl;
    return 0;       }
