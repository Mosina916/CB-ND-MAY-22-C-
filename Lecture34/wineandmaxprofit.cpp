#include<iostream>
using namespace std;
int winemaxprofit(int winebottles[],int l,int r,int day){

	// base case
	if(l>r){
		return 0;
	}


	// rec case

	int op1=day*winebottles[l]+winemaxprofit(winebottles,l+1,r,day+1);
	int op2=day*winebottles[r]+winemaxprofit(winebottles,l,r-1,day+1);
	return max(op1,op2);

}

// top down
int topdownwinemaxprofit(int winebottles[],int l,int r,int day,int arr[100][100]){

	// base case
	if(l>r){
		return 0;
	}


	// rec case
	if(arr[l][r]!=0){
		return arr[l][r];
	}

	int op1=day*winebottles[l]+ topdownwinemaxprofit(winebottles,l+1,r,day+1,arr);
	int op2=day*winebottles[r]+ topdownwinemaxprofit(winebottles,l,r-1,day+1,arr);
	return arr[l][r]=max(op1,op2);

}


int bottomupapproach(int winebottles[],int l,int r,int n){
	int arr[100][100]={0};

	// diagonal fill karne k lye 
	for(int i=0;i<n;i++){
		arr[i][i]=n*winebottles[i];
	}


	for(int i=n-2;i>=0;i--){
		for(int j=0;j<n;j++){
			if(i<j){
				int day=n-(j-i);
				int op1=day*winebottles[i]+arr[i+1][j];
				int op2=day*winebottles[j]+arr[i][j-1];
				arr[i][j]=max(op1,op2);
			}
		}
	}


	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j <n;j++)
		{
			cout<<arr[i][j]<<'\t';
		}
		cout<<endl;
	}

	return arr[0][n-1];

}

int main(){
	int winebottles[]={2,3,5,1,4};

	// int winebottles[]={2,3,0,1,4};
	int n=sizeof(winebottles)/sizeof(int);


	cout<<winemaxprofit(winebottles,0,n-1,1)<<endl;

	// int **arr=new int*[n];
	// for (int i = 0; i <n; ++i)
	// {
	// 	arr[i]=new int[n];
	// }


	int arr[100][100];



	for (int i = 0; i <100; ++i)
	{
		for (int j = 0; j < 100;j++)
		{
			arr[i][j]=0;
		}
	}

	cout<<topdownwinemaxprofit(winebottles,0,n-1,1,arr)<<endl;

	for (int i = 0; i <n; ++i)
	{
		for (int j = 0;  j<n;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}

	cout<<endl;
	cout<<endl;

	cout<<bottomupapproach(winebottles,0,n-1,n)<<endl;
	cout<<endl;




	return 0;
}