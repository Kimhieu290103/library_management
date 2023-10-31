#include"Sach.h"
sach::sach(){
    masosach="";
    tensach="";
    namxuatban=0;
    soquyen=0;
    tinhtrang=false;
}
sach::sach(string masosach, string tensach, int namxuatban, int soquyen, bool tinhtrang){
    this->masosach=masosach;
    this->tensach=tensach;
    this->namxuatban=namxuatban;
    this->soquyen=soquyen;
    this->tinhtrang=tinhtrang;
}
sach::sach(const sach &s){
  masosach=s.masosach;
  tensach=s.tensach;
  namxuatban=s.namxuatban;
  soquyen=s.namxuatban;
  tinhtrang=s.tinhtrang;
}
sach::~sach(){

}
void sach::set_masosach(string masosach){
    this->masosach=masosach;
}
void sach::set_tensach(string tensach){
    this->tensach=tensach;
}
void sach::set_namxuatban(int namxuatban){
    this->namxuatban=namxuatban;
}
void sach::set_soquyen(int soquyen){
    this->soquyen=soquyen;
}
void sach::set_tinhtrang(bool tinhtrang){
    this->tinhtrang=tinhtrang;
}
string sach::get_masosach(){
    return this->masosach;
}
string sach::get_tensach(){
    return this->tensach;
}
int sach::get_namxuatban(){
    return this->namxuatban;
}
int sach::get_soquyen(){
    return this->soquyen;
}
bool sach::get_tinhtrang(){
    return this->tinhtrang;
}
const sach& sach::operator=(const sach& s){
    this->masosach=s.masosach;
    this->tensach=s.tensach;
    this->namxuatban=s.namxuatban;
    this->soquyen=s.soquyen;
    this->tinhtrang=s.tinhtrang;
    return *this;
}
ostream& operator<<(ostream& o, const sach& s){
    o<<"ma so sach: "<<s.masosach<<endl;
    o<<"ten sach: "<<s.tensach<<endl;
    o<<"nam xuat ban: "<<s.namxuatban<<endl;
    o<<"so quyen: "<<s.soquyen<<endl;
    if(s.tinhtrang) o<<"sach chua cho muon"<<endl;
    else o<<"sach da cho muon"<<endl;
    return o;

}
istream& operator>>(istream& in, sach& s){
    bool check=true;
    do{
        if(check=false)
            cout<<"nhap lai ma so sach!"<<endl;
        
        check=true;
        cout<<"nhap ma so sach: "; 
        in>>s.masosach;
        if(s.masosach.length()!=3) check=false;
        else{
            for(int i=0;i<3;i++){
                if(s.masosach[i]<=48 or s.masosach[i]>=58){
                    check=false;
                }

            }
        }
    }while(check=false);
    cout<<"nhap ten sach: ";
    getline(in, s.tensach);
    bool kiemtra=true;
    do{
        cout<<"nhap nam xuat ban: ";
        in>>s.namxuatban;
        if((s.namxuatban<9999) or s.namxuatban>2022) kiemtra=false; 
    } while (kiemtra=false);
    cout<<"nhap so quyen: ";
    in>>s.soquyen;
    s.tinhtrang=true;
    return in;
}