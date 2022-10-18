// 1.WAP to swap private data member of two classes.
// [The classes have no relation with each other].
#include<iostream>
using namespace std;
class value1;
class value
{
    private:
        int num1;
    public:
        value()
        {
            cout<<"Enter the value of num1: ";
            cin>>num1;
        }
        void show()
        {
                cout<<"\n Value of Number 1 : "<<num1;
        }
        friend void swap(value *num1, value1 *num2);
};
class value1
{
    private:
        int num2;
    public:
        value1()
        {
            cout<<"Enter the value of num2: ";
            cin>>num2;
        }
        void show()
        {
                cout<<"\n Value of Number 2 : "<<num2;
        }
        friend void swap(value *num1, value1 *num2);
};
void swap(value *no1, value1 *no2)
{
        int no3;
        no3=no1->num1;
        no1->num1=no2->num2;
        no2->num2=no3;
}
int main()
{
        value b;
        value1 d;
        swap(&b, &d);
        b.show();
        d.show();
        return 0;
}
