#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n3 = 0;
    int n5 = 0;
    cout << "Enter 5 integers:" << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "You entered:" << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
        if(arr[i] % 3 == 0){
            n3++;
        }
        if(arr[i] % 5 == 0){
            n5++;
        }
    }
    cout << "\nNumber of integers divisible by 3: " << n3 << endl;
    cout << "Number of integers divisible by 5: " << n5 << endl;

    return 0;
}
