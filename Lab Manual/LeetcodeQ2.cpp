#include <iostream>
using namespace std;
int main() {
    int n,temp, total = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> temp; 
        if (temp<0)
        {
            continue;
        }
        
        total += temp;
    }
    cout << "Sum = " << total;;
    return 0;
}
