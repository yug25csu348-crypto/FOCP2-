#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

string solve(int n, vector<int>& piles) {
    sort(piles.begin(), piles.end(), greater<int>());

    set<int> usedQuantities;
    long long alexTotal = 0, bobTotal = 0;
    int turn = 0;

    for (int i = 0; i < n; i++) {
        int pile = piles[i];
        if (usedQuantities.count(pile))
            continue;

        usedQuantities.insert(pile);

        if (turn == 0)
            alexTotal += pile;
        else
            bobTotal += pile;

        turn = 1 - turn;
    }

    if (alexTotal > bobTotal)
        return "Alex";
    else if (bobTotal > alexTotal)
        return "Bob";
    else
        return "Tie";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> piles(n);
        for (int i = 0; i < n; i++)
            cin >> piles[i];

        cout << solve(n, piles) << "\n";
    }

    return 0;
}
