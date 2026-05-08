#include <iostream>
using namespace std;

int main() {
    int marks;
    int key;

    cout << "Enter your marks (0 - 100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered";
        return 0;
    }

    // Convert marks to a switch key
    key = marks / 10;

    switch (key) {
        case 10:   // for 100
        case 9:    // 90–99
            cout << "Grade: A+";
            break;

        case 8:    // 80–89
            cout << "Grade: A";
            break;

        case 7:    // 70–79
            cout << "Grade: B";
            break;

        case 6:    // 60–69
            cout << "Grade: C";
            break;

        case 5:    // 50–59
            cout << "Grade: D";
            break;

        default:   // below 50
            cout << "Grade: F (Fail)";
    }

    return 0;
}
