#include<iostream>
using namespace std;
int mincost(int costarr[4][4],int x,int y){
	// base case
	if(x==0 and y==0){
		return costarr[x][y];
	}


	if(x<0||y<0){
		return INT_MAX;
	}



	// rec case
	int op1=mincost(costarr,x-1,y);
	int op2=mincost(costarr,x,y-1);
	return min(op1,op2)+costarr[x][y];
}

int topdownmincost(int costarr[4][4],int x,int y,int arr[4][4]){
	// base case
	if(x==0 and y==0){
		return arr[x][y]=costarr[x][y];
	}


	if(x<0||y<0){
		return INT_MAX;
	}



	// rec case
	if(arr[x][y]!=-1){
		return arr[x][y];
	}

	int op1=topdownmincost(costarr,x-1,y,arr);
	int op2=topdownmincost(costarr,x,y-1,arr);
	return arr[x][y]=min(op1,op2)+costarr[x][y];
}

int bottomup(int costarr[4][4],int x,int y,int n){
	int arr[4][4];
	arr[0][0]=costarr[0][0];


	
	for(int j=1;j<n;j++){
		arr[0][j]=arr[0][j-1]+costarr[0][j];
	}

	for(int k=1;k<n;k++){
		arr[k][0]=arr[k-1][0]+costarr[k][0];
	}


	for(int l=1;l<n;l++){
		for(int m=1;m<n;m++){
			arr[l][m]=min(arr[l-1][m],arr[l][m-1])+costarr[l][m];

		}
	

	}


	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<"\t";

		}
		cout<<endl;
	}
	cout<<endl;

	return arr[x][y];
	


}
int main(){
	// int arr[10]={0};

		// int arr[10];

	// memset(arr,-1,sizeof(arr));

	// for (int i = 0; i <10; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	int costarr[4][4]={
		{2,1,2,4},
		{3,1,4,1},
		{3,6,4,5},
		{2,1,6,4}

	};
	int arr[4][4];
	for (int i = 0; i <4; ++i)
	{
		for(int j=0;j<4;j++){
			arr[i][j]=-1;

		}
	}

	cout<<topdownmincost(costarr,2,3,arr)<<endl;



	// cout<<mincost(costarr,2,3)<<endl;


	cout<<bottomup(costarr,2,3,4)<<endl;
	



	return 0;
}