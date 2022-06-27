#include<iostream>
using namespace std;
int main(){
	// int arr[5]={3,5,2,6,7};
	// int n=5;

	// cout<<&arr[0]<<endl;
	// cout<<arr<<endl;
	int arr[100];
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		// cin>>arr[i];
		cin>>*(arr+i);

	}

	for (int i = 0; i <n; ++i)
	{
		// cout<<arr[i]<<endl;
		cout<<*(arr+i)<<endl;
	}
	cout<<endl;


	return 0;
}