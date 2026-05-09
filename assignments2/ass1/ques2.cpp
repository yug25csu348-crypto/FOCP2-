#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1e7 + 1;

vector<int> distinctPrimeCount(MAXN, 0);

void sieve() {
    for (int p = 2; p < MAXN; p++) {
        if (distinctPrimeCount[p] == 0) {
            for (int multiple = p; multiple < MAXN; multiple += p) {
                distinctPrimeCount[multiple]++;
            }
        }
    }
}

int powerOf2[9] = {1, 2, 4, 8, 16, 32, 64, 128, 256};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int k = distinctPrimeCount[n];
        cout << powerOf2[k] << "\n";
    }

    return 0;
}
