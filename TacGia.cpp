#include"TacGia.h"
const tacgia& tacgia::operator=(const tacgia& s){
    this->ten=s.ten;
    this->donvicongtac=s.donvicongtac;
    this->tuoi=s.tuoi;
    return *this;
}
ostream &operator<<(ostream &o, const tacgia &s){
    cout<<"ten tac gia: "<<s.ten<<endl;
    cout<<"don vi cong tac: "<<s.donvicongtac<<endl;
    cout<<"tuoi tac gia: "<<s.tuoi<<endl;
    return o;
}
istream &operator>>(istream & in, tacgia &s){
    cout<<"nhap ten: ";
    getline(in,s.ten);
    cout<<"nhap don vi cong tac: ";
    getline(in, s.donvicongtac);
    cout<<"nhap tuoi: ";
    in>>s.tuoi;
    return in;
}