#include<iostream>
using namespace std;

bool staircaseserach(int arr[4][4],int trows,int tcols,int key){
	int rowno=0;
	int colno=tcols-1;

// loop
	while(colno>=0 &&rowno<=trows-1){
		if(arr[rowno][colno]==key){
		cout<<"key is present at index "<<rowno<<" "<<colno<<endl;
		return true;
	}
	else if(arr[rowno][colno]>key){
		colno--;

	}
	else{
		rowno++;
	}

	}

	return false;
	





}


int main(){
	int arr[4][4]={
		{1,3,4,6},
		{5,7,8,13},
		{14,16,17,19},
		{29,30,32,35}
	};
	int key;
	cin>>key;
// cout<<true<<endl;
	// cout<<false<<endl;
	if(staircaseserach(arr,4,4,key)){
		// cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;


	}


	

	return 0;
}