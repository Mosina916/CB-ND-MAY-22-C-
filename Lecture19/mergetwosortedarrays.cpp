#include<iostream>
using namespace std;
void mergetwosortedarrays(int*arr1,int *arr2,int n1,int n2){
	int temp[1000];
	int i=0,j=0,k=0;

// loop
	while(j<=n2-1 and i<=n1-1){
		if(arr1[i]<arr2[j]){
		temp[k]=arr1[i];
		i++;
		k++;
	}
	else{
		temp[k]=arr2[j];
		k++;
		j++;

	}

	}

	while(i<=n1-1){
		temp[k]=arr1[i];
	i++;
	k++;

	}

	while(j<=n2-1){
		temp[k]=arr2[j];
	j++;
	k++;
	

	}


	for(int l=0;l<k;l++){
		cout<<temp[l]<<" ";
	}

	cout<<endl;
	
	
}
int main(){
	int arr1[]={2,4,5};
	int arr2[]={0,0,1,3};
	int n1=sizeof(arr1)/sizeof(int);
	int n2=sizeof(arr2)/sizeof(int);
	// 0 0 1 2 3 4 5
	mergetwosortedarrays(arr1,arr2,n1,n2);


	
	
	return 0;
}