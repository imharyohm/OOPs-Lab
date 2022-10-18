// WAP to demonstrate use of pure virtual function and abstract base class.
#include<iostream>
using namespace std;
class shape
{
public:
    virtual void area()=0;
};
class circle:public shape
{
private:
    float r;
public:
    circle()
    {
        r=0;
    }
    circle(float x)
    {
        r=x;
    }
    void area()
    {
        cout<<"Area of circle="<<3.14*r*r<<endl;
    }
};
class square:public shape
{
private:
    float s;
public:
    square()
    {
        s=0;
    }
    square(float x)
    {
        s=x;
    }
    void area()
    {
        cout<<"Area of square="<<s*s<<endl;
    }
};
class triangle:public shape
{
private:
    float b,h;
public:
    triangle()
    {
        b=0;
        h=0;
    }
    triangle(float x,float y)
    {
        b=x;
        h=y;
    }
    void area()
    {
        cout<<"Area of triangle="<<0.5*b*h<<endl;
    }
};
int main()
{
    shape *s;
    circle c(5);
    square sq(5);
    triangle t(5,6);
    s=&c;
    s->area();
    s=&sq;
    s->area();
    s=&t;
    s->area();
    return 0;
}