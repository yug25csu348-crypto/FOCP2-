#include<iostream>
using namespace std;

int main(){
    int qty, price;
    cout << "Enter quantity: ";
    cin >> qty;
    cout << "Enter price per item: ";
    cin >> price;

    float total = qty * price;

    if(qty > 1000){
        total = total * 0.9; // Apply 10% discount
    }

    cout << "Total cost: " << total << endl;
    return 0;
}
