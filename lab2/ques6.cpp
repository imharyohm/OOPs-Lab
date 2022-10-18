#include<iostream>
using namespace std;
int main()
{
    int i, mark[10];
    float sum=0, avg, perc;
    cout<<"Enter Marks of 10 student: ";
    for(i=0; i<5; i++)
    {
        cin>>mark[i];
        sum = sum+mark[i];
    }
    avg = sum/10;
    cout<<"\nAverage Marks = "<<avg;
    cout<<endl;
    return 0;
}
