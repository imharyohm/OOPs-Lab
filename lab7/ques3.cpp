// Create a class which a complex number. Add two objects and display the resultant object.
// Overload the ++ (post and pre) operator for the class.
#include<iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void getdata()
    {
        cout<<"Enter real and imaginary part of complex number";
        cin>>real>>img;
    }
    void showdata()
    {
        cout<<"Real part="<<real<<endl;
        cout<<"Imaginary part="<<img<<endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    complex operator++()
    {
        complex temp;
        temp.real=++real;
        temp.img=++img;
        return temp;
    }
    complex operator++(int)
    {
        complex temp;
        temp.real=real++;
        temp.img=img++;
        return temp;
    }
}; 
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.showdata();
    c3=++c1;
    c3.showdata();
    c3=c1++;
    c3.showdata();
    return 0;
}