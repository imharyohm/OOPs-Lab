// Create a class which stores account number, customer name and balance. Derive two
// classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores
// minimum balance. The ‘Current’ class stores the over-due amount. Include member
// functions in the appropriate class for
// -deposit money
// -withdraw [For saving account minimum balance should be checked.]
// [For current account overdue amount should be calculated.]
// -display balance
// Display data from each class using virtual function.

#include<iostream>
#include<string.h>
using namespace std;
class Account{
    public:
    int acc_no;
    string name;
    int balance;
    virtual void getdata()=0;
    virtual void showdata()=0;
    virtual void deposit()=0;
    virtual void withdraw()=0;
};
class Savings:public Account{
    public:
    int min_bal;
    void getdata(){
        cout<<"Enter account number,name and balance of savings account"<<endl;
        cin>>acc_no>>name>>balance;
        cout<<"Enter minimum balance of savings account"<<endl;
        cin>>min_bal;
    }
    void showdata(){
        cout<<"Account number:"<<acc_no<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
    void deposit(){
        int dep;
        cout<<"Enter amount to be deposited"<<endl;
        cin>>dep;
        balance=balance+dep;
        cout<<"Balance after deposit is "<<balance<<endl;
    }
    void withdraw(){
        int with;
        cout<<"Enter amount to be withdrawn"<<endl;
        cin>>with;
        if(balance-with>=min_bal){
            balance=balance-with;
            cout<<"Balance after withdrawal is "<<balance<<endl;
        }
        else{
            cout<<"Minimum balance should be maintained"<<endl;
        }
    }
};
class Current:public Account{
    public:
    int over_due;
    void getdata(){
        cout<<"Enter account number,name and balance of current account"<<endl;
        cin>>acc_no>>name>>balance;
        cout<<"Enter over due amount of current account"<<endl;
        cin>>over_due;
    }
    void showdata(){
        cout<<"Account number:"<<acc_no<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
    void deposit(){
        int dep;
        cout<<"Enter amount to be deposited"<<endl;
        cin>>dep;
        balance=balance+dep;
        cout<<"Balance after deposit is "<<balance<<endl;
    }
    void withdraw(){
        int with;
        cout<<"Enter amount to be withdrawn"<<endl;
        cin>>with;
        if(balance-with>=over_due){
            balance=balance-with;
            cout<<"Balance after withdrawal is "<<balance<<endl;
        }
        else{
            cout<<"Over due amount should be maintained"<<endl;
        }
    }
};
int main(){
    Savings s;
    Current c;
    Account *a;
    a=&s;
    a->getdata();
    a->showdata();
    a->deposit();
    a->withdraw();
    a=&c;
    a->getdata();
    a->showdata();
    a->deposit();
    a->withdraw();
    return 0;
}
