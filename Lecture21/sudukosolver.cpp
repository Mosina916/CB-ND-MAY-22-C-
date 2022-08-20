#include<iostream>
#include<cmath>
using namespace std;

bool kyamainumdaalsaktihunijpe(int mat[9][9],int i,int j,int num,int n){
	// vertical check
	for(int l=0;l<n;l++){
		if(mat[l][j]==num){
		return false;
	}

	}
	// horizontal check
	for(int k=0;k<n;k++){
		if(mat[i][k]==num){
		return false;
	}

	}

	// root(N)*root(n) matrix check
	// i=4,j=5
	int p=sqrt(n);//3
	int si=(i/p)*p;//3
	int sj=(j/p)*p;//3

	for(int l=si;l<=si+2;l++){
		for(int k=sj;k<=sj+2;k++){
			if(mat[l][k]==num){
		return false;
	}
		}
	}

	return true;
	
	
	
}

bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int k=0;k<n;k++){
				cout<<mat[l][k]<<" ";


			}
			cout<<endl;
		}
		// return true;
		return false;
		
	}


	// recursive case
	if(j==n){
		return sudukosolver(mat,i+1,0,n);
	}

	// filled
	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);
	}
	else{
		for(int num=1;num<=9;num++){
		if(kyamainumdaalsaktihunijpe(mat,i,j,num,n)==true){
		mat[i][j]=num;
		bool kyaaageseansmila=sudukosolver(mat,i,j+1,n);
		if(kyaaageseansmila==true){
			return true;
		}
		mat[i][j]=0;//backtracking



	}

	}

	}


	// unfilled
	
	return false;
	


}

int main(){
	
int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};
		sudukosolver(mat,0,0,9);

	return 0;
}