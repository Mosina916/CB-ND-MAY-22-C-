#include<iostream>
using namespace std;
void update(int*b,int n){
	for (int i = 0; i <n; ++i)
	{
		// b[i]=b[i]+10;

		*(b+i)=*(b+i)+10;

	}
}
int main(){
	int arr[5]={3,5,2,6,7};
	int n=5;

	update(arr,n);


	for (int i = 0; i <n; ++i)
	{
		// cout<<arr[i]<<endl;
		cout<<*(arr+i)<<endl;
	}
	cout<<endl;


	return 0;
}