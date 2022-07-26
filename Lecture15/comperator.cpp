#include <iostream>
#include<algorithm>
using namespace std;
bool mycompare(int a,int b){
	// return a>b;
	return a<b;

}
int main(){

	int arr[]={4,7,2,3,1,9};
	int n=sizeof(arr)/sizeof(int);
	// comperator

	// sort(arr,arr+n);//1 2 3 4 7 9
	sort(arr,arr+n,mycompare);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
