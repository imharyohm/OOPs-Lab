// i. WAP to overload following operators for class Distance, which stores the Distance in feet
// and inches.
// a) Binary + to
// -add two objects (D3=D1+D2)
// -Add an object to an integer, where the integer should be added to the
// inches value ( D2=4+D1)
// b) Unary -
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void getdata()
    {
        cout << "Enter feet and inches";
        cin >> feet >> inches;
    }
    void showdata()
    {
        cout << "Feet=" << feet << endl;
        cout << "Inches=" << inches << endl;
    }
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        return temp;
    }
    Distance operator+(int i)
    {
        Distance temp;
        temp.feet = feet;
        temp.inches = inches + i;
        return temp;
    }
    Distance operator-()
    {
        Distance temp;
        temp.feet = -feet;
        temp.inches = -inches;
        return temp;
    }
};
int main()
{
    Distance d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d3 = d1 + d2;
    d3.showdata();
    d3 = d1 + 4;
    d3.showdata();
    d3 = -d1;
    d3.showdata();
    return 0;
}
