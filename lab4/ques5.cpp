#include<iostream>
#include<math.h>
using namespace std;
class area{
public:
	int a,b;
	void setDim(){
	cout<<"Enter length and breath of Rectangle:"<<endl;
	cin>>a>>b;
	}
	void getArea(){
	int area=a*b;
	cout<<"The area of rectangle is:"<<area;
	}
};
int main(){
area rect;
rect.setDim();
rect.getArea();

return 0;
}
