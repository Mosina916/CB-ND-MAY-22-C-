#include<iostream>
using namespace std;
bool is7presentornot(int arr[],int n){
	// base case
	if(n==0){
		return false;
	}



	// recursive case
	if(arr[0]==7){
		return true;

	}
	return is7presentornot(arr+1,n-1);
}
int main(){
	int arr[]={6,17,9,2};
	int n=sizeof(arr)/sizeof(int);
	if(is7presentornot(arr,n)){
		cout<<"7 is present"<<endl;

	}
	else{
		cout<<"7 is not present"<<endl;

	}

	return 0;
}