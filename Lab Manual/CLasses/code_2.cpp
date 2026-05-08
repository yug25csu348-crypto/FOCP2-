#include<iostream>
using namespace std;

class Person
{
    private:
    string name;
    int age;

    public:
    Person(string n, int a)
    {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    ~Person()
    {
        cout << "Destructor called for " << name << endl;
    }
};

Person globalPerson("Global User", 40);

int main()
{
    cout << "Inside the main function" << endl;

    Person localPerson("John", 20);
    localPerson.display();

    return 0;
}
