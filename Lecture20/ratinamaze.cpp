 #include<iostream>
using namespace std;
int sol[100][100]={0};
bool ratinamaze(char maze[][10],int r,int c,int i,int j){
	// base case
	if(i==r-1 and j==c-1){
		sol[i][j]=1;
		for(int l=0;l<r;l++){
			for(int k=0;k<c;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		// return true;

		return false;
	}



	// recursive case
	sol[i][j]=1;
	// forward
	if(j<=c-2 and maze[i][j+1]!='X'){
		// tou mai aage jaa sakti hun
		bool kyaaageseansmila=ratinamaze(maze,r,c,i,j+1);
		if(kyaaageseansmila==true){
			return true;
		}

	}
	// doward check
	if(i<=r-2 and maze[i+1][j]!='X'){
		// tou mai neeche jaa sakti hun
		bool kyaneecheseansmila=ratinamaze(maze,r,c,i+1,j);
		if(kyaneecheseansmila==true){
			return true;
		}

	}
	sol[i][j]=0;
	return false;


}
int main(){
	char maze[][10]={
		"OOOO",
		"OXOO",
		"OOXX",
		"OOOO"
	};
	
	int r=4,c=4;
	ratinamaze(maze,r,c,0,0);

	


	return 0;
}