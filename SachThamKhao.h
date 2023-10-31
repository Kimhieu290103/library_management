#pragma once
#include"Sach.h"
#include"TacGia.h"
class sachthamkhao:public sach{
    private:
    int sotacgia;
    tacgia tacGia;
    public:
    sachthamkhao(){
        
    }
    sachthamkhao(int sotacgia, tacgia tacGia, string masosach, string tensach, int namxuatban, int soquyen, bool tinhtrang): sach(masosach, tensach,namxuatban, soquyen, tinhtrang){
        this->sotacgia=sotacgia;
        this->tacGia=tacGia;
    }
    void set_sotacgia(int sotacgia){
        this->sotacgia=sotacgia;
    }
    void set_tacgia(tacgia tacGia){
        this->tacGia=tacGia;
    }
    int get_sotacgia(){
        return this->sotacgia;
    }
    tacgia get_tacGia(){
        return this->tacGia;
    }
    const sachthamkhao& operator=(const sachthamkhao &);
    friend ostream& operator<<(ostream& o,const sachthamkhao &);
    friend istream& operator>>(istream& in, sachthamkhao&);
};