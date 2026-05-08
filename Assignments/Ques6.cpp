#include <iostream>
using namespace std;
int main() {
    int emps, salary;
    cout << "Enter the number of employees: ";
    cin >> emps;
    cout << "Enter salary of each employee: ";
    cin >> salary;
  
    int totalSalary = emps * salary;

    cout << "Bonus per employee: " << salary * 0.12 << endl;
    cout << "Total Salary of each emp: " << salary * 1.12 << endl;
  
    return 0;
}
