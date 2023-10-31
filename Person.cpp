#include"Person.h"
person::person(){
    ten="";
}
person::person(string){
    this->ten=ten;
}
person::~person(){

}
void person::set_ten(string){
    this->ten=ten;
}
string person::get_ten(){
    return this->ten;
}