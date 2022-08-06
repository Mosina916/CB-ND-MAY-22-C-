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


int firstindexof7(int*arr,int n,int i){
	// base case
	if(i==n){
		return -1;
	}


	// recursive case
	if(arr[i]==7){
		return i;
	}
	return firstindexof7(arr,n,i+1);
}

int lastindexof7(int *arr,int n,int i){
	// base case
	if(i==-1){
		return -1;
	}


	// recursive case
	if(arr[i]==7){
		return i;
	}
	return lastindexof7(arr,n,i-1);
}

void allindicesof7(int *arr,int n,int i){
	// base case
	if(i==n){
		return;
	}


	// recursive case
	if(arr[i]==7){
		cout<<i<<" ";
	}
	// allindicesof7(arr,n,i+1);

	allindicesof7(arr,n,++i);
}
int main(){
	int arr[]={6,7,9,7,7,7,2};
	int n=sizeof(arr)/sizeof(int);
	// if(is7presentornot(arr,n)){
	// 	cout<<"7 is present"<<endl;

	// }
	// else{
	// 	cout<<"7 is not present"<<endl;

	// }


	// cout<<firstindexof7(arr,n,0)<<endl;

	// cout<<lastindexof7(arr,n,n-1)<<endl;

	allindicesof7(arr,n,0);

	return 0;
}