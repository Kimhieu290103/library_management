#include"SachThamKhao.h"
const sachthamkhao& sachthamkhao::operator=(const sachthamkhao& s){
    this->sotacgia=sotacgia;
    this->tacGia=tacGia;
    this->masosach=s.masosach;
    this->tensach=s.tensach;
    this->namxuatban=s.namxuatban;
    this->soquyen=s.soquyen;
    this->tinhtrang=s.tinhtrang;
    return *this;
}
ostream& operator<<(ostream& o, const sachthamkhao& s){
    o<<"ma so sach: "<<s.masosach<<endl;
    o<<"ten sach: "<<s.tensach<<endl;
    o<<"nam xuat ban: "<<s.namxuatban<<endl;
    o<<"so quyen: "<<s.soquyen<<endl;
    if(s.tinhtrang) o<<"sach chua cho muon"<<endl;
    else o<<"sach da cho muon"<<endl;
    o<<"so tac gia: "<<s.sotacgia<<endl;
    o<<"thong tin tac gia: "<<s.tacGia<<endl;
    return o;

}
istream& operator>>(istream& in, sachthamkhao& s){
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
    cout<<"nhap so tac gia: ";
    in>>s.sotacgia;
    cout<<endl;
    in>>s.tacGia;
    return in;
}