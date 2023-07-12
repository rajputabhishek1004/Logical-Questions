#include<iostream>
using namespace std;
int main(){
	int arr[5],i;
	cout<<"enter five array numbers = ";
	for(i=0;i<=4;i++) {
		cin>>arr[i];
	}
	
	for(i=4;i>=0;i--){
		cout<<"reversed array is = "<<arr[i]<<" ";
	}
}
