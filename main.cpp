#include"QLsach.h"
#include"TacGia.h"
#include"SachThamKhao.h"
#include"Sach.h"
#include"Queue.h"
#include"Person.h"
void quanlysach(QLsach &ql){
    int luachon;
    do{
        system("cls");
        cout << "1. Them sach." << endl;
        cout << "2. Cap nhat thong tin sach" << endl;
        cout << "3. Xoa sach (xoa dau danh sach)." << endl;
        cout << "4. Tim sach." << endl;
        cout << "5. Sap xep sach." << endl;
        cout << "6. In ra danh sach sach." << endl;
        cout << "0. Thoat." << endl;
        cout << "Nhap lua chon: "; 
        switch (luachon){
            case 1:
            {
                ql.themsach();
                ql.hienthisach();
                break;
            }
            case 2:
            {  string m;
                cin>>m;
                ql.capnhatthongtin(m);
                ql.hienthisach();
                break;
            }
            case 3:
            {
                ql.xoaloaisach();
                ql.hienthisach();
                break;
            }
            case 4:
            {   
                string m;
                cin>>m;
                ql.timkiemsach( m);
                break;
            }
            case 5:
            {
                ql.Sapxeptheosoquyen();
                ql.hienthisach();
                break;
            }
            case 6:
            {
                ql.hienthisach();
                break;
            }
            case 0:
            {
                break;
            }
            default:
            {
                cout << "Lua chon khong hop le!" << endl;
                system("pause");
                break;
            }
        }
    }while (luachon!=0);
}
int main(){
    QLsach ql;
    quanlysach(ql);
}