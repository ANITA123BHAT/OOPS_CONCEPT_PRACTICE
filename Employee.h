#ifndef EMPLOYEE_H

#define EMPLOYEE_H
#include<bits/stdc++.h>
using namespace std;
class Employee{
private:
string name,gender,building_no,street,area,city,pin,base_loc,dept,emp_type,band,pf_num,bank_accno;
int emp_id;
long double ctc;
public:
Employee();
Employee(string name,string gender,string building_no,string street,string area,string city,string pin,string base_loc,string dept,string emp_type,string band,string pf_num,string bank_accno,long double ctc,int emp_id);
string getname();
void setname(string);
string getgender();
void setgender(string);
string getbuilding();
void setbuild(string);
string getstreet();
void setstreet(string);
string getarea();
void setarea(string);
string getcity();
void setcity(string);
string getpin();
void setpin(string);
string getbaselocation();
void setbaselocation(string);
string getdepartment();
void setdepartment(string);
string getemptype();
void setemptype(string);
string getband();
void setband(string);
string getpfnum();
void setpfnum(string);
string getbankacc();
void setbankacc(string);
long double getctc();
void setctc(long double);
int getemp_id();
void setemp_id(int);
void display();
};
#endif