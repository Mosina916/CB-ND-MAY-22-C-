#include<iostream>
using namespace std;
// unsorted
bool findnumberinthematrix(int arr[100][100],int rows,int cols,int key){
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		if(arr[i][j]==key){
			cout<<"key is present at index "<<i<<" , "<<j<<endl;

			return true;

		}


	}
	
	}
	return false;

}
int main(){

	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//4 3

	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];

	}
	

	}

	int key;
	cin>>key;

	if(findnumberinthematrix(arr,rows,cols,key)){
		cout<<"yes key is present"<<endl;
	}
	else{
		cout<<"No key is not present"<<endl;

	}


	// for(int i=0;i<=rows-1;i++){
	//  for(int j=0;j<=cols-1;j++){
	// 	cout<<arr[i][j]<<" ";

	// }
	// cout<<endl;

	// }

	






	return 0;
}