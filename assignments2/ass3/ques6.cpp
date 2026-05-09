#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

class Bank {
private:
    map<int, int> accounts;   // userId -> balance

public:
    bool create(int userId, int amount) {
        bool isNewUser = accounts.find(userId) == accounts.end();

        if (isNewUser)
            accounts[userId] = amount;
        else
            accounts[userId] += amount;

        return isNewUser;
    }

    bool debit(int userId, int amount) {
        bool userExists = accounts.find(userId) != accounts.end();

        if (!userExists)
            return false;

        bool hasSufficientBalance = accounts[userId] >= amount;

        if (!hasSufficientBalance)
            return false;

        accounts[userId] -= amount;
        return true;
    }

    bool credit(int userId, int amount) {
        bool userExists = accounts.find(userId) != accounts.end();

        if (!userExists)
            return false;

        accounts[userId] += amount;
        return true;
    }

    int balance(int userId) {
        bool userExists = accounts.find(userId) != accounts.end();

        if (!userExists)
            return -1;

        return accounts[userId];
    }
};

int main() {
    int Q;
    cin >> Q;
    cin.ignore();

    Bank bank;

    while (Q--) {
        string line;
        getline(cin, line);
        istringstream iss(line);

        string query;
        iss >> query;

        if (query == "CREATE") {
            int userId, amount;
            iss >> userId >> amount;
            bool result = bank.create(userId, amount);
            cout << (result ? "true" : "false") << "\n";

        } else if (query == "DEBIT") {
            int userId, amount;
            iss >> userId >> amount;
            bool result = bank.debit(userId, amount);
            cout << (result ? "true" : "false") << "\n";

        } else if (query == "CREDIT") {
            int userId, amount;
            iss >> userId >> amount;
            bool result = bank.credit(userId, amount);
            cout << (result ? "true" : "false") << "\n";

        } else if (query == "BALANCE") {
            int userId;
            iss >> userId;
            cout << bank.balance(userId) << "\n";
        }
    }

    return 0;
}
