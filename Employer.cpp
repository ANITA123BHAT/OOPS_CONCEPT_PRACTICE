#include<bits/stdc++.h>
#include "Employer.h"
#include "Employee.h"
using namespace std;
Employer::Employer(){

}
Employer::Employer(string Name_Com){
    this->Name_Com=Name_Com;
}
void Employer::setNameCom(string nameCom){
    Name_Com=nameCom;
}
string Employer::getNameCom(){
    return Name_Com;
}
Employee e;
void Employer::adduser(){
string name;
	cout<<"Enter your Name"<<endl;
	getline(cin>>ws,name);
	
	string gen;
	cout<<"Enter your Gender"<<endl;
	getline(cin>>ws,gen);

	string dno;
	cout<<"Enter Door Number"<<endl;
	getline(cin,dno);

	string st;
	cout<<"Enter Street"<<endl;
	getline(cin>>ws,st);

	string ar;
	cout<<"Enter Area"<<endl;
	getline(cin>>ws,ar);

	string ct;
	cout<<"Enter City"<<endl;
	getline(cin>>ws,ct);

	string pin;
	cout<<"Enter Pin code"<<endl;
	getline(cin>>ws,pin);

	string bloc;
	cout<<"choose Base Location"<<endl;
	getline(cin>>ws,bloc);

	string dept;
	cout<<"select Department"<<endl;
	getline(cin>>ws,dept);

	string etype;
	cout<<"select Employee type\n1.Permanent 2.Part-time 3.Contractor"<<endl;
	getline(cin>>ws,etype);

	string band;
	cout<<"Enter Band"<<endl;
	getline(cin>>ws,band);

	string pf_no;
	cout<<"Enter Pf Number"<<endl;
	getline(cin>>ws,pf_no);

	string Bank_Ano;
	cout<<"Enter your Bank Account Number"<<endl;
	getline(cin>>ws,Bank_Ano);

	long double ctc;
	cout<<"Enter your CTC In lakhs"<<endl;
	cin>>ctc;

	int id;
	cout<<"Enter your Employee Id"<<endl;
	cin>>id;

	e = Employee(name,gen,dno,st,ar,ct,pin,bloc,dept,etype,band,pf_no,Bank_Ano,ctc,id);
	emp_data.insert({id,e});
}
void Employer::modifyuser(){
    int id;
    cout<<"entre employee id:"<<endl;
    cin>>id;
    for(auto i:emp_data){
        if((i.first==id)&&(emp_data.size()>0)){
             int ch=0;
             do{
                cout<<" ********** choose what you want to modify **********"<<endl;

				cout<<"1.Name \n2.Building Number \n3.Street \n4.Area \n5.City \n6.Pin Code \n7.Location \n"
						"8.Department \n9.Employee Type \n10.Band \n11.Bank Account-Number \n12.CTC \n13.Exit\n"<<endl;
						cin>>ch;
						switch(ch){
							case 1:
					{
						string nm;
						cout<<"Enter Correct Name"<<endl;
						getline(cin>>ws,nm);
						i.second.setname(nm);
						cout<<"Your name should be modified"<<endl;
					}
					break;
					case 2:
					{
						string build_no;
						cout<<"netre the correct door number:"<<endl;
						getline(cin>>ws,build_no);
						i.second.setbuild(build_no);
                        cout<<"building  Number Modified"<<endl;

					}
					break;
					case 3:
					{
						string street;
						cout<<"enter the correct street name:"<<endl;
						getline(cin>>ws,street);
						i.second.setstreet(street);
						cout<<"your street name modified"<<endl;
					}
					break;
					case 4:
					{
						string area;
						cout<<"netr the exact area name:"<<endl;
						getline(cin>>ws,area);
						i.second.setarea(area);
						cout<<"your area name modified.."<<endl;
					}
					break;
					case 5:
					{
						string city;
						cout<<"enter your city name:"<<endl;
						getline(cin>>ws,city);
						i.second.setcity(city);
						cout<<"City name is modified.."<<endl;
					}
					break;
					case 6:
					{
						string pin;
						cout<<"entre the correct pincode: "<<endl;
						getline(cin>>ws,pin);
						i.second.setpin(pin);
						cout<<"your pincode is modified"<<endl;
					}
					break;
					case 7:
					{
						string loc;
						cout<<"neter the correct location :"<<endl;
						getline(cin>>ws,loc);
						i.second.setbaselocation(loc);
						cout<<"your base location is modified.."<<endl;
											}
											break;
					case 8:
					{
						string dept;
						cout<<"enter correct department "<<endl;
						getline(cin>>ws,dept);
						i.second.setdepartment(dept);
			            cout<<"department is modofied"<<endl;
					}
					break;
					case 9:
					{

					string et;
						cout<<"Enter Correct Employee Type"<<endl;
						getline(cin>>ws,et);
						i.second.setemptype(et);
						cout<<"Employee Type Modified"<<endl;

						}
						break;
					case 10:
					{
						string brand;
						cout<<"Enter Correct Employee Band"<<endl;
						getline(cin>>ws,brand);
						i.second.setband(brand);
						cout<<"Employee Modified"<<endl;
					}
					break;
					case 11:
					{
						string acc_n;
						cout<<"\nEnter Correct Account Number"<<endl;
						getline(cin>>ws,acc_n);
						i.second.setbankacc(acc_n);
						cout<<"Account Number Modified\n"<<endl;
					}
					break;
					case 12:
					{
						long double ctc;
						cout<<"Enter Correct CTC\n"<<endl;
						cin>>ctc;
						i.second.setctc(ctc);
						cout<<"\nCTC Modified"<<endl;
					}
					break;
						}
			}while(ch != 13);
			cout<<"\n *************** The Modified details are  ***********"<<endl;
			i.second.display();
		}
		else
		{
			cout<<"*********** Employee Does Not Exist **********"<<endl;
		}
	}
             }
    

void Employer::deleteuser(){
    int id;
    cout<<"enter the employee id:"<<endl;
    cin>>id;
    emp_data.erase(id);
    cout<<id<<" ";
}
void Employer::searchuser(){
    int id;
    cout<<"enter the employee id:"<<endl;
    for(auto i:emp_data){
        if(i.first==id){
            i.second.display();
        }
    }
}
void Employer::printuser(){
    for(auto i:emp_data){
        i.second.display();
    }
}

void Employer::generatepayslip(){
    ;
}