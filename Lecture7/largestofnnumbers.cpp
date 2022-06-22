#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;//6
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];//4 9 16 -1 13 2
	}

	int largest=arr[0];
	int i=1;

// loop
	while(i<=n-1){
		if(arr[i]>largest){
		largest=arr[i];

	}
	i++;

	}

	cout<<"largest no is "<<largest<<endl;
	


	




	return 0;
}