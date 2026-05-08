#include <iostream>
using namespace std;
int main() {
    int itemNo, price, quantity;
    cout << "Enter item number: ";
    cin >> itemNo;
    cout << "Enter unit price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;
    float total = price * quantity;

    cout << "Item No: " << itemNo << endl;
    cout << "Unit Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Price: " << total << endl;
    cout << "After Discount: " << total * 0.8 << endl;
    return 0;
}
