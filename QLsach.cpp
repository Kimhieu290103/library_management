#include"QLsach.h"
QLsach::QLsach(){
    this->soluongsach=0;
}
QLsach::~QLsach(){

}
void QLsach::set_soluongsach(int length){
    this->soluongsach=length;
}
int QLsach::get_soluongsach(){
    return this->soluongsach;
}
void QLsach::hienthisach(){
    for(int i=0;this->soluongsach;i++){
        cout<<*listsachthamkhao[i];
    }
}
void QLsach::themsach(){
    sachthamkhao *stk=new sachthamkhao;
    cin>>*stk;
    listsachthamkhao.Enqueue(stk);
    this->soluongsach++;
}
int QLsach::indexof(string m){
    int index=-1;
    for(int i=0;i<soluongsach;i++){
        if(listsachthamkhao[i]->get_masosach() ==m){
            index=i;
            break;
        }
    }
    return index;
}
void QLsach::capnhatthongtin(string &m){
    int index=indexof(m);
    string masosach, tensach;
    int namxuatban, soquyen,sotacgia;
    bool tinhtrang;
    int lc;
    if(index>0){
    cout<<"1.cap nhat ma sach "<<endl;
    cout<<"2.cap nhap ten sach "<<endl;
    cout<<"3.cap nhat nam xuat ban "<<endl;
    cout<<"4.cap nhat so quyen "<<endl;
    cout<<"5.cap nhat tinh trang "<<endl;
    cout<<"6.cap nhat so tac gia "<<endl;
    cout<<"0. thoats "<<endl;
    do{cout<<"nhap lua chon muon cap nhat:";
    cin>>lc;
    if(lc==1){
        rewind(stdin);
        cout<<"nhap ma so sach moi:";
        getline(cin,masosach);
        listsachthamkhao[index]->set_masosach(masosach);
    }
    if(lc=2){
        rewind(stdin);
        cout<<"nhap ten sach moi:";
        getline(cin,tensach);
        listsachthamkhao[index]->set_tensach(tensach);
    }
    if(lc=3){
        rewind(stdin);
        cout<<"nhap nam xuat ban moi:";
        cin>>namxuatban;
        listsachthamkhao[index]->set_namxuatban(namxuatban);
    }
    if(lc=4){
        rewind(stdin);
        cout<<"nhap so luong sach moi:";
        cin>>soquyen;
        listsachthamkhao[index]->set_soquyen(soquyen);
    }
    if(lc=5)
    {
        rewind(stdin);
        cout<<"nhap tinh trang moi:";
        cin>>tinhtrang;
        listsachthamkhao[index]->set_tinhtrang(tinhtrang);
    }
    if(lc=6){
        rewind(stdin);
        cout<<"nhap so tac gia moi:";
        cin>>sotacgia;
        listsachthamkhao[index]->set_sotacgia(sotacgia);
    }
    if(lc=0) return;
    }
    while(lc>6);
    }
}
void QLsach::xoaloaisach(){
    listsachthamkhao.Dequeue();
    this->soluongsach--;
    cout<<"xoa thanh cong";
}
int QLsach::timkiemsach(string m){
    int left=0;
    int right=soluongsach;
    int index=-1;
    while(left<right){
        index=(left+right)/2;
        if(listsachthamkhao[index]->get_masosach()==m){cout<<"vi tri cua sach la: "<<index;
        return index;}
        if(m>listsachthamkhao[index]->get_masosach())left=index;
        else right=index;
    }
    return -1;
}
void QLsach::Sapxeptheosoquyen(){
    int lc;
    cout<<"\n1.sap xep tang dan";
    cout<<"\n2.sap xep giam dan";
    cin>>lc;
    int x;
    for(int i=0;i<soluongsach-1;i++){
        x=i;
        for(int j=i+1;j<soluongsach;j++){
            if(lc=1){
                if(listsachthamkhao[j]->get_soquyen() < listsachthamkhao[x]->get_soquyen())
                x=j;
                }
                else if(lc=2){
                    if(listsachthamkhao[j]->get_soquyen() > listsachthamkhao[x]->get_soquyen())
                    x=j;
                }
            if(x!=i){
                sachthamkhao* temp=listsachthamkhao[i];
                listsachthamkhao[i]=listsachthamkhao[x];
                listsachthamkhao[x]=temp;
            }
        }
    }
}