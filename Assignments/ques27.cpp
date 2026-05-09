#include<iostream>
using namespace std;
int main(){
    float a[10],mx=-1e9;
    for(int i=0;i<10;i++){cin>>a[i];if(a[i]>mx)mx=a[i];}
    cout<<"Max price: "<<mx;
}
