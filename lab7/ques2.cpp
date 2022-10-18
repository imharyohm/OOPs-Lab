// Create a class to store an integer array. Overload insertion and extraction operator to
// input and display the array elements.

#include<iostream>
using namespace std;
class array
{
private:
    int a[10];
public:
    array()
    {
        for(int i=0;i<10;i++)
        {
            a[i]=0;
        }
    }
    void getdata()
    {
        cout<<"Enter 10 elements of array";
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
    }
    void showdata()
    {
        cout<<"Array elements are:";
        for(int i=0;i<10;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    friend istream & operator>>(istream &in,array &a1);
    friend ostream & operator<<(ostream &out,array &a1);
};
istream & operator>>(istream &in,array &a1)
{
    cout<<"Enter 10 elements of array";
    for(int i=0;i<10;i++)
    {
        in>>a1.a[i];
    }
    return in;
}

ostream & operator<<(ostream &out,array &a1)
{
    cout<<"Array elements are:";
    for(int i=0;i<10;i++)
    {
        out<<a1.a[i]<<" ";
    }
    return out;
}
int main()
{
    array a1;
    cin>>a1;
    cout<<a1;
}
