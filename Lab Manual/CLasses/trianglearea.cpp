#include<iostream>
using namespace std;

class triangle
{
    public:
    int base, height;
    
    public:
    triangle(int a, int b)
    {
        height = a;
        base = b;
    }

    void setdata(int b, int h)
    {
      height = h;
      base = b;
      
    }

    void area()
    {
        cout << "Area of triangle: " << (base*height)/2 << endl;
    }
};

int main()
{
    triangle t1(10, 5);
    t1.area();

    triangle t2(0, 0);
    t2.setdata(20, 10);
    t2.area();

    return 0;
}
