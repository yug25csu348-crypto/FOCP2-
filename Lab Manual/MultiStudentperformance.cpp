#include <iostream>
using namespace std;
#include <string>

void displyMenuLevel2(int operation){
    if(operation == 1){
        cout << "\nStudent Operations Menu (Level 2):" << endl;
        cout << "1. Add New Student" << endl;
        cout << "2. Enter / Update Marks" << endl;
        cout << "3. View Student Details" << endl;
        cout << "4. Back to Main Menu" << endl;
    } else if(operation == 2){
        cout << "\nReports & Analytics Menu (Level 2):" << endl;
        cout << "1. Class Average" << endl;
        cout << "2. Top Scorer" << endl;
        cout << "3. Student-wise Result Summary" << endl;
        cout << "4. Back to Main Menu" << endl;
    }


}

void displayMenuLevel1(){
    cout << "\nMain Menu (Level 1):" << endl;
    cout << "1. Student Operations" << endl;
    cout << "2. Reports & Analytics" << endl;
    cout << "3. Exit" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Student Operations selected." << endl;
        displyMenuLevel2(1);
        break;

    case 2:
        cout << "Reports & Analytics selected." << endl;
        displyMenuLevel2(2);
        break;
    
    default:
        break;
    }
}

int main(){
    int nStudents;
    int nSubjects;
    cout << "Enter number of students: ";
    cin >> nStudents;
    cout << "Enter number of subjects: ";
    cin >> nSubjects;

    int ids[nStudents];
    string names[nStudents];
    int marks[nStudents][nSubjects];
    for(int i = 0; i < nStudents; i++){
        cout << "Enter students " << i+1 << " ID and Name: ";
        cin >> ids[i] >> names[i];

        // Asking the marks of each student
        // for(int j = 0; j<nSubjects; j++){
        //     cout << "Enter marks of "<< nSubjects <<" subject, " << j+1 << ": ";
        //     cin >> marks[i][j];
        // }
    }

    cout << "\nStudent Names And ids:" << endl;
    for(int i = 0; i < nStudents; i++){
        cout << ids[i] << " " << names[i] << endl;
    }


    // Displaying the Menu
    displayMenuLevel1();

    return 0;
}
