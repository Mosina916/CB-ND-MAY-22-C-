#include<iostream>
using namespace std;
void mergetowsortedarrays(int a[7],int b[3],int m,int n){
	int i=m-1;
	int j=n-1;
	int k=m+n-1;

// loop
	while(i>=0&& j>=0){
		if(a[i]>b[j]){
		a[k]=a[i];
		k--;
		i--;
	}
	else{
		a[k]=b[j];
		j--;
		k--;

	}

	}

// loop
	while(j>=0){
		a[k]=b[j];
	k--;
	j--;


	}

	for (int i = 0; i <n+m; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	
}

int main(){
	int m=4;
	int n=3;
	int a[7]={2,4,6,9};
	int b[3]={1,3,7};
	mergetowsortedarrays(a,b,m,n);
	


	return 0;
}