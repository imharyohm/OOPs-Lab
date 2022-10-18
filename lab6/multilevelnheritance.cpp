#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "base's constructor called" << endl;
    }
    ~base()
    {
        cout << "base's destructor called" << endl;
    }
};
class base1 : public base
{
public:
    base1()
    {
        cout << "base1's constructor called" << endl;
    }
    ~base1()
    {
        cout << "base1's destructor called" << endl;
    }
};
class C : public base1
{
public:
    C()
    {
        cout << "C's constructor called" << endl;
    }
    ~C()
    {
        cout << "C's destructor called" << endl;
    }
};
int main()
{
    C c;
    return 0;
}