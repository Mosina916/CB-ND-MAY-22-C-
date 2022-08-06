#include<iostream>
using namespace std;
void mergetwosortedarrays(int*arr,int s,int e){
	int temp[1000];
	int mid=(s+e)/2;

	int i=s,j=mid+1,k=s;

// loop
	while(j<=e and i<=mid){
		if(arr[i]<arr[j]){
		temp[k]=arr[i];
		i++;
		k++;
	}
	else{
		temp[k]=arr[j];
		k++;
		j++;

	}

	}

	while(i<=mid){
		temp[k]=arr[i];
	i++;
	k++;

	}

	while(j<=e){
		temp[k]=arr[j];
	j++;
	k++;
	

	}


	// for(int l=0;l<k;l++){
	// 	cout<<temp[l]<<" ";
	// }

	// cout<<endl;


	// copy temp arr in arr
	for(int l=s;l<=e;l++){
		arr[l]=temp[l];

	}
}
void mergesort(int *arr,int s,int e){
	// base case
	if(s==e){
		return;
	}
	// recursive case
	// step 1-->divide through mid
	int mid=(s+e)/2;//2

	// step 2-->
	mergesort(arr,s,mid);//1 4 5
	mergesort(arr,mid+1,e);//2 3

	mergetwosortedarrays(arr,s,e);

}

int main(){
	int arr[]={4,1,1,1,0,0,0,6,4,1,5,3,2};
	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,n-1);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	
	
	
	return 0;
}