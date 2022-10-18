#include<iostream>
#include<string>
using namespace std;
class student{
public:
	string name;
	int roll_no;
	};
int main(){
student st;
cout<<"Enter the name and roll no.:"<<endl;
cin>>st.name>>st.roll_no;
cout<<"The name of student is:"<<st.name<<endl;
cout<<"Roll no.:"<<st.roll_no;
return 0;
}
	
