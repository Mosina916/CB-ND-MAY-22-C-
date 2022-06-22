#include<iostream>
using namespace std;
int main(){
	// int arr[10]={1,3,4,5,3,5,3,5,3,4};
	int arr[100];
	int n;
	cin>>n;//10
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}

	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}




	return 0;
}