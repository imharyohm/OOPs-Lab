// Create a class which stores employee name,id and salary Derive two classes from
// ‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA
// and basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
// Calculate the salary of a regular employee and a par-time employee, using virtual
// function
#include<iostream>
#include<string.h>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    int salary;
    virtual void getdata()=0;
    virtual void showdata()=0;
    virtual void cal_salary()=0;
};
class Regular:public Employee{
    public:
    int da,hra,basic;
    void getdata(){
        cout<<"Enter id,name and salary of regular employee"<<endl;
        cin>>id>>name>>salary;
        cout<<"Enter da,hra and basic salary of regular employee"<<endl;
        cin>>da>>hra>>basic;
    }
    void showdata(){
        cout<<"Id:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
     }
    void cal_salary(){
        salary=da+hra+basic;
        cout<<"Salary of regular employee is "<<salary<<endl;
    }
};
class Part_time:public Employee{
    public:
    int hours,pay;
    void getdata(){
        cout<<"Enter id,name and salary of part time employee"<<endl;
        cin>>id>>name>>salary;
        cout<<"Enter hours and pay per hour of part time employee"<<endl;
        cin>>hours>>pay;
    }
    void showdata(){
        cout<<"Id:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
          }
    void cal_salary(){
        salary=hours*pay;
        cout<<"Salary of part time employee is "<<salary<<endl;
    }
};
int main(){
    Regular r;
    Part_time p;
    Employee *e;
    e=&r;
    e->getdata();
    e->showdata();
    e->cal_salary();
    e=&p;
    e->getdata();
    e->showdata();
    e->cal_salary();
    return 0;
}

