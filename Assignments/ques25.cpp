#include<iostream>
#include<string>
using namespace std;
int main(){
    string p; cin>>p;
    bool up=false,lo=false,dg=false,sp=false;
    string special="@#$%!&*";
    for(char c:p){
        if(isupper(c)) up=true;
        else if(islower(c)) lo=true;
        else if(isdigit(c)) dg=true;
        else if(special.find(c)!=string::npos) sp=true;
    }
    cout<<(up&&lo&&dg&&sp?"Strong password":"Weak password");
}
