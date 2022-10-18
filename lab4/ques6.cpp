#include<iostream>
using namespace std;
class avg{
public:
	static float a,b,c;
	static float cal_avg()
	{
	float avg;
	avg=(a+b+c)/3;
	return avg;
	}
};
float avg::a=4.6;
float avg::b=5.5;
float avg::c=6.7;
int main(){
cout<<"The avg is:"<<avg::cal_avg(a,b,c);
return 0;
}
