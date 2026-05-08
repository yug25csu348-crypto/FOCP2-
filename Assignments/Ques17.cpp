#include<iostream>
using namespace std;
#include<vector>
#include<math.h>
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n%i == 0){
            sum += i;
        }
    }

    cout << endl;

    if(sum == n){
        cout << n << " is a perfect number." << endl;
    }
    else{
        cout << n << " is not a perfect number." << endl;   
    }

    vector<int> digits;
    sum = 0;
    int temp = n;
    while(temp > 0){
        int digit = temp % 10;
        digits.push_back(digit);
        temp /= 10;
    }

    if(digits.size() < 2){
        cout << n << " is not an armstrong number." << endl;
        return 0;
    }

    for(int i = 0; i < digits.size(); i++){
        sum += pow(digits[i], digits.size());
    }

    if(sum == n){
        cout << n << " is an armstrong number." << endl;
    }
    else{
        cout << n << " is not an armstrong number." << endl;   
    }
}
