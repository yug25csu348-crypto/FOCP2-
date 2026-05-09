#include<iostream>
#include<string>
using namespace std;
int main(){
    string s; cin>>s;
    for(char c:s) if(!isalnum(c)&&c!='_'){cout<<"Invalid username";return 0;}
    cout<<"Valid username";
