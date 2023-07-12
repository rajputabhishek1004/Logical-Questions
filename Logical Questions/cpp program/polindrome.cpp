#include<iostream>
using namespace std;
int main(){
	int n,sum=0,t,r;
	cout<<"enter a number = ";
	cin>>n;
	t=n;
	while(n!=0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(t==sum){
		cout<<"number is polindrome number";
	}
	else{
	 cout<<"number is not polindrome number";
	}
}
