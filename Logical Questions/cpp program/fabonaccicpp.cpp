#include<iostream>
using namespace std;
int main(){
	int n1=0,n2=1,n3,i,n;
	cout<<"enter number = ";
	cin>>n;
	cout<<"your series is = ";
	cout<<n1<<n2;
	for (i=1;i<=n;i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		cout<<n3;
	}
}
