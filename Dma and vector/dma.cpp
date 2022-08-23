#include<iostream>
using namespace std;
int main(){
	// sma
	// int a;
	// a=40;
	// cout<<a<<endl


	int*xptr=new int;
	*xptr=40;

	cout<<*xptr<<endl;


	float*fptr=new float;
	*fptr=60.43;

	cout<<*fptr<<endl;


	// variable free delete nameofptr
	delete xptr;
	xptr=NULL;

	delete fptr;
	fptr=NULL;




	return 0;
}