#include<iostream>
using namespace std;
class student{
public:
	int roll_no;
	float marks;
	void display();
	void getdata();
	
	};
student st[5];
void student::getdata()
{	int i;
	for(i=0;i<5;i++){
	cout<<"Enter the student rollno. and marks";
	cin>>st[i].roll_no>>st[i].marks;
	}
}
void student::display()
{	int i;
	for(i=0;i<5;i++)
	{
	cout<<"The detai of student is"<<endl;
	cout<<st[i].roll_no<<"  " <<st[1].marks<<endl;
	}
}
int main(){
student obj;
obj.getdata();
obj.display();
return 0;
}
