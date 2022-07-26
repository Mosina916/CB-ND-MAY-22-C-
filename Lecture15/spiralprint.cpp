#include <iostream>
using namespace std;
void spriralprint(int arr[100][100],int trows,int tcols){
	int sr=0,er=trows-1,sc=0,ec=tcols-1;

// loop
	while(sr<=er and sc<=ec){

	// ist row
	for(int i=sc;i<=ec;i++){//i=3
		cout<<arr[sr][i]<<" ";

	}
	sr++;
	// last col
	for(int j=sr;j<=er;j++){//j=3
		cout<<arr[j][ec]<<" ";

	}
	ec--;
	// end row
	if(sr<=er){
		for(int k=ec;k>=sc;k--){//k=0
		cout<<arr[er][k]<<" ";

	}
	er--;

	}
	
	// ist col
	if(sc<=ec){
		for(int l=er;l>=sr;l--){
		cout<<arr[l][sc]<<" ";

	}
	sc++;

	}
	

	}


	
	
	
	

}
int main(){
	// int arr[4][4]={
	// 	{6,3,9,7},
	// 	{14,13,12,0},
	// 	{19,17,15,18},
	// 	{20,23,22,11}
	// };

	int arr[100][100];
	int trows,tcols;
	cin>>trows>>tcols;
	for (int i = 0; i <trows; ++i)
	{
		for(int j=0;j<tcols;j++){
			cin>>arr[i][j];
		}
	}

	spriralprint(arr,trows,tcols);







	return 0;
}
