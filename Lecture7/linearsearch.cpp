#include<iostream>
using namespace std;
int main(){
	int arr[]={9,3,6,1,2,13};
	int tb=sizeof(arr)/sizeof(int);//6
	// int tb;
	// cin>>tb;//6
	// int arr[100];
	// for(int i=0;i<tb;i++){
	// 	cin>>arr[i];
	// }
	int key;
	cin>>key;
	int indx=0;
	while(indx<=tb-1){
		if(arr[indx]==key){
			cout<<"key is present"<<endl;
			break;
			// return 0;

	}
	indx++;//6


	}

	if(indx==tb){
		cout<<"key not found"<<endl;
	}
	





	return 0;
}