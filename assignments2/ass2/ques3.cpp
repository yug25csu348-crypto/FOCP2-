#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long L, R;
    cin >> L >> R;

    long long oddCount = (R + 1) / 2 - L / 2;

    if (oddCount % 2 == 1)
        cout << "odd\n";
    else
        cout << "even\n";

    return 0;
}
