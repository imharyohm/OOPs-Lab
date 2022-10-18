#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter any number of which factorial have to calculated:";
cin>>a;
int sum=1;
if(a!=0){
for(int i=1;i<=a;i++){
sum=sum*i;
}
cout<<"The factorial is:"<<sum<<endl;
}
else{
cout<<"The factorial is: 1";
}
return 0;
}

