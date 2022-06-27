#include<iostream>
using namespace std;
int main(){


	double x=10.56;
	double*xptr=&x;
	cout<<"value of xptr is "<<xptr<<endl;
	cout<<"value of &x is "<<&x<<endl;


	cout<<*xptr<<endl;

	// *xptr is same as x

	// x=x+10;
	*xptr=*xptr+10;

	cout<<*xptr<<endl;



	// char ch='D';
	// char*cptr=&ch;
	// cout<<"value of xptr is "<<cptr<<endl;
	// cout<<"value of &x is "<<&ch<<endl;
	// cout<<"value of &x is "<<(float*)&ch<<endl;

	return 0;
}