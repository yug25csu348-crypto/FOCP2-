#include<iostream>
#include<string.h>
using namespace std;

class Vehicle{
    string brand;
    int year;
};

class Car : Vehicle{
    string modal;
    int sittingCap;
};

class ElectricCar : Car{
    float batteryCap;
    float range;
};
