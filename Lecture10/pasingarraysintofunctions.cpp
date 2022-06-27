#include<iostream>
using namespace std;
void updatearr(int arr[6],int n){
	for(int i=0;i<n;i++){
		arr[i]=arr[i]+10;

	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}
int main(){
	int arr[6]={2,3,4,1,8,9};
	int n=sizeof(arr)/sizeof(int);

	updatearr(arr,n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}