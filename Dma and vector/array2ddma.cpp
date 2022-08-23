#include<iostream>
using namespace std;
int main(){
	// sma 2d array
	// int arr[3][4];

	int**arrptr=new int*[3];

	for(int i=0;i<3;i++){
		arrptr[i]=new int[4];
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cin>>arrptr[i][j];
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arrptr[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0;i<3;i++){
		delete[]arrptr[i];
		arrptr[i]=NULL;
	}


	delete[]arrptr;
	arrptr=NULL;






	return 0;
}