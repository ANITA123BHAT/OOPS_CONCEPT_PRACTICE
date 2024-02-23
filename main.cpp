#include<bits/stdc++.h>
#include "Employee.h"
#include "Employer.h"
using namespace std;
int main(){
    int ch=0;
    cout<<"***************Payroll****************"<<endl;
    cout<<" select your choice:"<<"\n"<< "1.add user"<<"\n 2.Modify user"<<"\n"<<"3.delete user"<<"\n"<<"4.serach user"<<"\n"<<"5.printf all employee detail"<<"\n"<<"6.generate pay slip"<<"\n"<<"7.exit"<<endl;
cin>>ch;
Employer emp;
switch(ch){
    case 1:
    emp.adduser();
    cout<<"employes details are added"<<endl;
    break;
    case 2:
    emp.modifyuser();
    cout<<"employee details area modified"<<endl;
    break;
    case 3:
    emp.deleteuser();
    cout<<"employee get deleted"<<endl;
    break;
    case 4:
    emp.searchuser();
    cout<<"Serached completed"<<endl;
    break;
    case 5:
    emp.printuser();
    break;
    case 6:
    emp.generatepayslip();
    break;
    default:
    cout<<"enter the valid choice"<<endl;
    break;
}
    return 0;
}
