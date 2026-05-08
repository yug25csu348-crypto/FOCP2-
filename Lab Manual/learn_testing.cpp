#include <iostream>
using namespace std;

class testing
{
private:
    /* data */
public:
    testing(/* args */);
    ~testing();
};

testing::testing(/* args */)
{
}

testing::~testing()
{
}

int x = 1;
int main(){
    int arr[5];
    int x = 0;
    cout<<sizeof(arr)/sizeof(int) << endl;
    cout << ::x << endl;
}
