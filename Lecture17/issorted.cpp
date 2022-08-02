#include<iostream>
using namespace std;
bool isarraysortedornot(int *arr,int n){//1
	// base case
	if(n==1){
		return true;

	}
	// recursive case
	if(arr[0]<=arr[1] and isarraysortedornot(arr+1,n-1)){
		return true;

	}
	return false;
}


bool isarraysortedornot2(int arr[],int n){
	// base case
	if(n==1){
		return true;
	}




	// recursive case
	if(arr[n-2]<=arr[n-1] and isarraysortedornot2(arr,n-1)){
		return true;
	}
	return false;


}


bool isarraysortedornot3(int arr[],int n,int i){//3

	// base case
	if(i==n-1){
		return true;
	}



	// recursive case
	if(arr[i]<=arr[i+1] and isarraysortedornot3(arr,n,i+1)){
		return true;
	}
	return false;


}

int main(){
	int arr[]={4,7,9,0,10};

	// int arr[]={4,5,6,7,9,9,9,9,12,14};
	int n=sizeof(arr)/sizeof(int);
	// if(isarraysortedornot(arr,n)){
	// 	cout<<"sorted"<<endl;

	// }
	// else{
	// 	cout<<"unsorted"<<endl;
	// }


	// if(isarraysortedornot2(arr,n)){
	// 	cout<<"sorted"<<endl;

	// }
	// else{
	// 	cout<<"unsorted"<<endl;
	// }

	if(isarraysortedornot3(arr,n,0)){
		cout<<"sorted"<<endl;

	}
	else{
		cout<<"unsorted"<<endl;
	}



	return 0;
}