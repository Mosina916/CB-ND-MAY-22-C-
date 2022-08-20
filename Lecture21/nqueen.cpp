#include<iostream>
using namespace std;
int co=0;
bool kyaqueenplacekarsaktehai(int board[20][20],int i,int j,int n){
	// vertical check
	for(int k=i-1;k>=0;k--){
		if(board[k][j]==1){
		return false;
	}

	}

	// horizontal check
	// for(int l=j-1;l>=0;l--){
	// 	if(board[i][l]==1){
	// 	return false;
	// }

	// }

	// right diagonal

	// i=2,j=2
	int u=i;
	int v=j;
	i--;//1
	j++;//3

	while(i>=0 and j<n){
		if(board[i][j]==1){
		return false;
	}
	i--;
	j++;

	}

	// left diagonal
	u--;
	v--;
	while(u>=0 and v>=0){
		if(board[u][v]==1){
		return false;
	}
	u--;
	v--;

	}


	return true;
	
	

	


	
}
bool nqueen(int board[20][20],int i,int n){
	// base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int k=0;k<n;k++){
				if(board[l][k]==1){
					cout<<'Q'<<" ";
				}
				else{
					cout<<"- ";
				}
			}
			cout<<endl;
		}
		co++;
		// return true;
		cout<<endl;
		return false;

	}



	// recursive case
	for(int j=0;j<n;j++){
		if(kyaqueenplacekarsaktehai(board,i,j,n)){
		board[i][j]=1;
		bool kyamujheaageeansmila=nqueen(board,i+1,n);
		if(kyamujheaageeansmila==true){
			return true;
		}
		board[i][j]=0;//backtracking

	}

	}


	return false;

	


}
int main(){
	int board[20][20]={0};
	int n;
	cin>>n;//4
	nqueen(board,0,n);

	cout<<"total sol are "<<co<<endl;




	return 0;
}