#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "Employee.h"
#include<bits/stdc++.h>
using namespace std;
class Employer:public Employee{
private:
string Name_Com;
public:
map<int,Employee>emp_data;
Employer();
Employer(string Name_Com);
void setNameCom(string compnay);
string getNameCom();
void adduser();
void modifyuser();
void deleteuser();
void searchuser();
void printuser();
void generatepayslip();
};
#endif