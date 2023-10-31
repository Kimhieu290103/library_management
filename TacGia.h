#pragma once
#include"Person.h"
class tacgia:public person{
    protected:
    string donvicongtac;
    int tuoi;
    public:
    tacgia(){
        string donvicongtac="";
        int tuoi=0;
    }
    tacgia(string ten ,string donvicongtac, int tuoi ):person(ten){
        this->donvicongtac=donvicongtac;
        this->tuoi=tuoi;
    }
    void set_donvicongtac(string donvicongtac){
        this->donvicongtac=donvicongtac;
    }
    void set_tuoi(int tuoi){
        this->tuoi=tuoi;
    }
    string get_donvicongtac(){
        return this->donvicongtac;

    }
    int get_tuoi(){
        return this->tuoi;
    }
    const tacgia& operator = (const tacgia& );
    friend ostream& operator<<(ostream &o, const tacgia& );
    friend istream & operator>>(istream& in, tacgia& );
};