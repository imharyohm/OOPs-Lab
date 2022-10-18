#include<iostream>
using namespace std;

class Account
{
    protected:
        int custno;
        string custname;
        int balance;
    public:
        Account(int cno,string cname,int bal)
        {
            custno = cno;
            custname = cname;
            balance = bal;
        }
};

class Savings : public Account
{
    protected:
        int minbalance;
    public:
        Savings(int minbal, int cno, string cna, int bal): Account(cno,cna,bal)
        {
            minbalance = minbal;
        }


        void depositSavings()
        {
            int dep;
            cout << "Enter Amount to deposit in Savings Account : ";
            cin >> dep;
            balance += dep;
        }
        void withdraw()
        {
            int with;
            cout << "Enter Amount you want to Withdraw from Savings Account : ";
            cin >> with;
            if(balance-with < minbalance)
                cout << "Amount can't be withdrawn as you will not be left with minimum balance ... " << endl;
            else
            {
                balance -= with;
                cout << "Amount Withdrawn Successfully... Collect your Cash... \nRemaining Balance = " << balance << endl;
            }
        }
        void Display()
        {
            cout << "\nSavings Account :--\nCustomer number = " << custno << " Name = " << custname << " Balance Remaining = " << balance << endl;
        }
};

class Current : public Account
{
    protected:
        int overdue;
    
public:
        Current(int ovdue, int cno, string cna, int bal): Account(cno,cna,bal)
        {
            Account(387,"Hamdan",1000);
            overdue = ovdue;
        }
        void depositCurrent()
        {
            int dep;
            cout << "Enter Amount to deposit in Savings Account : ";
            cin >> dep;
            balance += dep;
        }
        void withdraw()
        {
            int with;
            cout << "Enter Amount you want to Withdraw from Current Account : ";
            cin >> with;
            if(balance-with < overdue)
                cout << "Amount can't be withdrawn as you will not be left with Over-due amount ... " << endl;
            else
            {
                balance -= with;
                cout << "Amount Withdrawn Successfully... Collect your Cash... \nRemaining Balance = " << balance << endl;
            }
        }
        void Display()
        {
            cout << "\nCurrent Account :--\nCustomer number = " << custno << " Name = " << custname << " Balance Remaining = " << balance << endl;
        }
};
int main()
{
    int cno, bal;
    string nam;
    cout << "Enter Customer number, Name and Balance : ";
    cin >> cno >> nam >> bal;

    Savings obs(500,cno,nam,bal);
    Current obc(500,cno,nam,bal);

    obs.depositSavings();
    obs.withdraw();

    obc.depositCurrent();
    obc.withdraw();

    obs.Display();
    obc.Display();
}
