include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter any number";
	cin>>n;
	int s=sqrt(n);
	if(s*s==n){
		cout<<"number is perfect square";
	}
	else{
		cout<<"number is npot perfect square";
	}
}
