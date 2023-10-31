#pragma once
#include"TacGia.h"
#include"SachThamKhao.h"
#include"Sach.h"
#include"Queue.h"
#include"Person.h"
class QLsach{
    private:
    Queue<sachthamkhao*> listsachthamkhao;
     tacgia tacGia;
     int soluongsach;
    public:
    QLsach();
    ~QLsach();
    void set_soluongsach(int);
    int get_soluongsach();
    bool check();
     int indexof(string);
    void hienthisach();
    void themsach();
    void capnhatthongtin(string &);
    void xoaloaisach();
    int timkiemsach(string );
    void Sapxeptheosoquyen();
    friend ostream& operator<<(ostream &o, const QLsach);
    friend istream& operator>>(istream &in,QLsach& );
    sachthamkhao& operator=(const QLsach&);


};