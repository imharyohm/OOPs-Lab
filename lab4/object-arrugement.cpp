#include<iostream>
using namespace std;
class myclass
{
private:
int num;
public:
	void getdata()
	{
		cout<<"\n Enter a munber:";
		cin>>num;
	}
	void setdata(myclass o2)
	{
		num=o2.num;
	}
	void setdata(int a,myclass &o2)
	{
		num=o2.num;
	}
		void setdata(myclass *o2)
	{
		num=o2->num;
	}
	void showdata()
	{
	cout<<"NUM="<<num;
	}
};
int main(){
myclass o1,o2,o3,o4,o;
int a=0;
o2.getdata();
o1.setdata(o2);
o3.setdata(&o2);
o4.setdata(a,o2);
o1.showdata();
o2.showdata();
o3.showdata();
}	
		
