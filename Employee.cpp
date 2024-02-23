#include<bits/stdc++.h>
#include "Employee.h"
#include "Employer.h"
using namespace std;
Employee::Employee(){

}
Employee::Employee(string name,string gender,string building_no,string street,string area,string city,string pin,string base_loc,string dept,string emp_type,string band,string pf_num,string bank_accno,long double ctc,int emp_id){
this->name=name;
this->gender=gender;
this->building_no=building_no;
//this->gate=gate;
//this->door_no=door_no;
this->street=street;
this->area=area;
this->city=city;
this->pin=pin;
this->base_loc=base_loc;
this->emp_id=emp_id;
this->dept=dept;
this->emp_type=emp_type;
this->band=band;
this->pf_num=pf_num;
this->bank_accno=bank_accno;
this->ctc=ctc;
}
void Employee::setname(string name1){
    name=name1;
}
string Employee::getname(){
    return name;
}
void Employee::setgender(string gen){
    gender=gen;
}
string Employee::getgender(){
    return gender;
}
void Employee::setbuild(string building){
building_no=building;
}
string Employee::getbuilding(){
    return building_no;
}
void  Employee::setstreet(string streets){
    street=streets;
}
string Employee::getstreet(){
    return street;
}
void Employee::setarea(string areas){
    area=areas;
}
string Employee::getarea(){
    return area;
}
void Employee::setcity(string c){
    city=c;
}
string Employee::getcity(){
    return city;
}
void Employee:: setpin(string pincode){
    pin=pincode;
}
string Employee::getpin(){
    return pin;
}
void Employee::setbaselocation(string base){
    base_loc=base;
}
string Employee::getbaselocation(){
    return base_loc;
}
void Employee::setdepartment(string depart){
    dept=depart;
}
string Employee::getdepartment(){
    return dept;
}
void Employee::setemptype(string emptype){
    emp_type=emptype;
}
string Employee::getemptype(){
    return emp_type;
}
void Employee::setband(string bands){
    band=bands;
}
string Employee::getband(){
    return band;
}
void Employee::setpfnum(string pf){
    pf_num=pf;
}
string Employee::getpfnum(){
    return pf_num;
}
void Employee::setbankacc(string bank_acc){
    bank_accno=bank_acc;
}
string Employee::getbankacc(){
    return bank_accno;
}
void Employee::setctc(long double ctcs){
    ctc=ctcs;
}
long double Employee::getctc(){
    return ctc;
}
void Employee::setemp_id(int emp_id1){
    emp_id=emp_id1;
}
int Employee::getemp_id(){
    return emp_id;
}
void Employee::display(){
    cout<<getname()<<"\n"
    <<getgender()<<"\n"
    <<getbuilding()<<"\n"
    <<getstreet()<<"\n"
    <<getarea()<<"\n"
    <<getcity()<<"\n"
    <<getpin()<<"\n"
    <<getbaselocation()<<"\n"
    <<getdepartment()<<"\n"
    <<getemptype()<<"\n"
    <<getband()<<"\n"
    <<getpfnum()<<"\n"
    <<getbankacc()<<"\n"
    <<getctc()<<"\n"
    <<getemp_id()<<"\n";
    cout<<"*************************************"<<endl;
}