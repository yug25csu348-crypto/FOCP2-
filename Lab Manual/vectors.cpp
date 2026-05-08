#include<iostream>
using namespace std;
#include<vector>
int main (){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for(size_t i = 0; i < vec.size(); i++){
        cout << "Element at index " << i << ": " << vec[i] << endl;
    }
    
    for(int val : vec){
        cout << "Value: " << val << endl;
    }

    cout << "Vector size: " << vec.size() << endl;
    vec.pop_back();
    cout << "Vector size after pop_back: " << vec.size() << endl;
    for(size_t i = 0; i < vec.size(); i++){
        cout << "Element at index " << i << ": " << vec[i] << endl;
    }

    //frint , last and at
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;
    cout << "Element at index 0 using at(): " << vec.at(0) << endl;
    return 0;
}
