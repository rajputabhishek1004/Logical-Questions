#include<iostream>
using namespace std;
int main(){
	int a,b,x,y,r,lcm,hcf;
	cout<<"enter first number = ";
	cin>>a;
	cout<<"enter second number = ";
	cin>>b;
	x=a;
	y=b;
	while(true){
		lcm=a;
		r=a%b;
		if(r==0){
			break;
		}
		a=a*2;
	}
	hcf=x*y/lcm;
	cout<<"lcm of your two number = "<<lcm<<endl;
	cout<<"hcf of your two number = "<<hcf<<endl;
}
