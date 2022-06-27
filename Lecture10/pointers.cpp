#include<iostream>
using namespace std;
int main(){
	int a=10;
	float f=60.87;
	// double d=86.4535;

	// cout<<"value of a is "<<a<<endl;//10
	// cout<<"value of f is "<<f<<endl;//60.87
	// cout<<"value of d is "<<d<<endl;//86.4535


	// cout<<"size of a is "<<sizeof(a)<<endl;//4
	// cout<<"size of f is "<<sizeof(f)<<endl;//4
	// cout<<"size of d is "<<sizeof(d)<<endl;//8

	// cout<<"value of &a is "<<&a<<endl;//10
	// cout<<"value of &f is "<<&f<<endl;//60.87
	// cout<<"value of &d is "<<&d<<endl;//86.4535

	// cout<<"value of &a is "<<sizeof(&a)<<endl;//10
	// cout<<"value of &f is "<<sizeof(&f)<<endl;//60.87
	// cout<<"value of &d is "<<sizeof(&d)<<endl;//86.4535

	// int*aptr=&a;
	// int* aptr=&a;
	// int *aptr=&a;

	// // aptr is same as &a;

	// cout<<aptr<<endl;
	// cout<<&a<<endl;

	// float* fptr=&f;
	// cout<<&f<<endl;
	// cout<<fptr<<endl;
	// double* dptr=&d;
	// cout<<&d<<endl;
	// cout<<dptr<<endl;


	// char ch='F';
	// cout<<"value of ch is "<<ch<<endl;//'F'

	// cout<<"sizeof of ch is "<<sizeof(ch)<<endl;//1
	// // cout<<"value of &ch is : "<<&ch<<endl;
	// cout<<"size of &ch is "<<sizeof(&ch)<<endl;//8
// fooling of compiler

	// cout<<"value of &ch is : "<<(int*)&ch<<endl;
	// cout<<"value of &ch is : "<<(float*)&ch<<endl;
	// cout<<"value of &ch is : "<<(double*)&ch<<endl;
	// cout<<"value of &ch is : "<<(void*)&ch<<endl;


	// int s=80;
	// int*sptr=&s;
	// cout<<"value of sptr is : "<<sptr<<endl;
	// cout<<"value of sptr+1 is : "<<sptr+1<<endl;
	// cout<<"value of sptr+2 is : "<<sptr+2<<endl;
	// cout<<"value of sptr+3 is : "<<sptr+3<<endl;

	double d=80.43;
	double*dptr=&d;
	cout<<"value of sptr is : "<<dptr<<endl;
	cout<<"value of sptr+1 is : "<<dptr+1<<endl;
	cout<<"value of sptr+2 is : "<<dptr+2<<endl;

	

	return 0;
}