#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class sach{
    protected:
    string masosach;
    string tensach;
    int namxuatban;
    int soquyen;
    bool tinhtrang;
    public:
    sach();
    sach(string , string, int, int, bool);
    sach(const sach&);
    ~sach();
    void set_masosach(string);
    void set_tensach(string);
    void set_namxuatban(int );
    void set_soquyen(int);
    void set_tinhtrang(bool);
    string get_masosach();
    string get_tensach();
    int get_namxuatban();
    int get_soquyen();
    bool get_tinhtrang();
    const sach& operator=(const sach&);
    friend ostream& operator<<(ostream &o,const sach&);
    friend istream& operator>>(istream &in,sach& );
    
};