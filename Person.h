#pragma once
#include<iostream>
using namespace std;
class person{
    protected:
    string ten;
    public:
    person();
    person(string);
    ~person();
    void set_ten(string);
    string get_ten();
    
};