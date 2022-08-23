#include<iostream>
using namespace std;
int main(){
	// sma arr
	// int arr[100];

	// dma
	int*ptr=new int[5];

	for (int i = 0; i <5; ++i)
	{
		cin>>ptr[i];
	}

	for (int i = 0; i <5; ++i)
	{
		cout<<ptr[i]<<" ";
	}

	cout<<endl;



	delete[] ptr;
	ptr=NULL;





	return 0;
}