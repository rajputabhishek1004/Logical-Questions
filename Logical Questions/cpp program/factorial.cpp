#include<iostream>
using namespace std;
int main(){
	int n,f,i;
	cout<<"enter any number = ";
	cin>>n;
	f=n;
	for(i=1;i<n;i++){
		f=f*i;
		}
		cout<<"factorial of your number is = "<<f;
}
