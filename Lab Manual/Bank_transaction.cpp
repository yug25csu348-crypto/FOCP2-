#include <iostream>
#include <string>
using namespace std;

class Bank {
    private:
        string name;
        double balance;
        int rewardPoints;

    public:
        Bank(string name, double balance) {
            this->name = name;
            this->balance = balance;
            this->rewardPoints = 0;
        }

        void withdraw(double amount) {
            if (amount > balance) {
                cout << "Insufficient balance for " << name << endl;
            } else {
                balance -= amount;
                rewardPoints += 20;
                cout << "Amount deducted: " << amount << ". New balance: " << balance << ". Reward points: " << rewardPoints << endl;
            }
          
        }

        void displayAccount (){
            cout << name << " : " << balance;
        }

};

int main() {
    Bank customer1("Alice", 1000.0);
    customer1.withdraw(200.0);
    customer1.withdraw(900.0);
    return 0;
}
