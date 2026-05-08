#include<iostream>
using namespace std;
#include<string>
int main () {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversedStr += str[i];
    }
    if (reversedStr == str)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
    #include<iostream>
using namespace std;
#include<string>
int main () {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversedStr += str[i];
    }
    if (reversedStr == str)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
    
