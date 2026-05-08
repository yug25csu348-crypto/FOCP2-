#include <iostream>
#include <string> //Here we added the string header
using namespace std;

int main()
{
    string a, b; // small s will come
    cout << "Enter two strings: "; //changed the operator from << to <<
    cin >> a; // changed operator from << to >>
    cin >> b; // same here

    int count[26] = {0};

    for(int i=0; i<a.length(); i++) // added ()
    {
        count[a[i]-'a']++;
        count[b[i]-'a']--;
    }

    for(int i=0; i<26; i++)
    {
        if(count[i]!=0){ // removed ; and added {}
            cout << "Not Anagram";
            return 0; // added return statement here
        }
    }
    cout << "Anagram";
    
    return 0;
}
