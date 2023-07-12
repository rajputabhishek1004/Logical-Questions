#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"enter any year = ";
	cin>>year;
	if(year%400==0){
		cout<<"year is leap year";
	}
	else if(year%4){
		cout<<"year is leap year";
	}
	else if(year%100){
		cout<<"year is not leap year";
	}
	else{
		cout<<"year is not leap year";
	}
}
