#include<iostream>
using namespace std;
int main(){
	int n,sum=0,r;
	cout<<"enter a number = ";
	cin>>n;
	while(n!=0){
		r=n%10;
		sum=sum+r;
		n=n/10;
	}

	cout<<"sum of digits is = "<<sum;
	
}
