#include<iostream>
#include<string>
using namespace std;
class student{
public:
	string name;
	int roll_no;
	int phone;
	};
int main(){
int i,a;
student st;
for(i=0;i<2;i++){
cout<<"Enter the name,rollNo and phoneNo:"<<endl;
cin>>st.name>>st.roll_no>>st.phone;
}
for(a=0;a<2;a++){
cout<<"The name of student is:"<<st.name<<endl;
cout<<"Roll no.:"<<st.roll_no<<endl;
cout<<"Phone no.:"<<st.phone<<endl;
}
return 0;
}
	
