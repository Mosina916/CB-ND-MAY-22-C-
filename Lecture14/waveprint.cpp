#include<iostream>
using namespace std;

void waveform(int arr[4][4],int trows,int tcols){
	for(int colno=0;colno<=tcols-1;colno++){
		if(colno%2==0){
		// colno is even-->downward
		for(int rowno=0;rowno<=trows-1;rowno++){
			cout<<arr[rowno][colno]<<" ";

		}
		

	}
	else{
		// col is odd-->upward
		for(int j=trows-1;j>=0;j--){
			cout<<arr[j][colno]<<" ";


		}
		
	}

	}
	

}
int main(){
	int arr[4][4]={
		{1,3,9,6},
		{6,4,2,19},
		{7,13,16,14},
		{14,30,19,30}
	};

	waveform(arr,4,4);
















	// int arr[100][100];
	// int rows,cols;
	// cin>>rows>>cols;//4 3

	// for(int i=0;i<=rows-1;i++){
	// 	for(int j=0;j<=cols-1;j++){
	// 	cin>>arr[i][j];

	// }
	

	// }

	





	return 0;
}