#include <iostream>
using namespace std;
void formmatrixxo(char arr[100][100],int trows,int tcols){
	int sr=0,er=trows-1,sc=0,ec=tcols-1;
	char ch='X';
// loop
	while(sr<=er and sc<=ec){


	// ist row
	for(int i=sc;i<=ec;i++){//i=3
		// cout<<arr[sr][i]<<" ";
		arr[sr][i]=ch;

	}
	sr++;
	// last col
	for(int j=sr;j<=er;j++){//j=3
		// cout<<arr[j][ec]<<" ";

		arr[j][ec]=ch;

	}
	ec--;
	// end row
	if(sr<=er){
		for(int k=ec;k>=sc;k--){//k=0
		// cout<<arr[er][k]<<" ";
			arr[er][k]=ch;

	}
	er--;

	}
	
	// ist col
	if(sc<=ec){
		for(int l=er;l>=sr;l--){
	arr[l][sc]=ch;

	}
	sc++;


	}

	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}
	

	}


	
	
	
	

}
int main(){
	char arr[100][100];

	
	int trows,tcols;
	cin>>trows>>tcols;//6 6
	formmatrixxo(arr,trows,tcols);

	// print matrx
	for (int i = 0; i <trows; ++i)
	{
		for(int j=0;j<tcols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}







	return 0;
}
