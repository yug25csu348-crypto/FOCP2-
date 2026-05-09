#include <iostream>
#include <string>
using namespace std;

int operationsNeeded(const string& bulbs, int n, int l) {
    int ops = 0;
    int i = 0;

    while (i < n) {
        if (bulbs[i] == '1') {
            ops++;
            i += l;
        } else {
            i++;
        }
    }

    return ops;
}

int main() {
    int n, k;
    cin >> n >> k;

    string bulbs;
    cin >> bulbs;

    for (int l = 1; l <= n; l++) {
        if (operationsNeeded(bulbs, n, l) <= k) {
            cout << l << "\n";
            return 0;
        }
    }

    return 0;
}
