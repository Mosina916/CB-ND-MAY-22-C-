#include<iostream>
using namespace std;
int z=690;
int main(){
	// local varoables
	int x=30;
	// int x=90;
	int y=40;
	float f=42.23;
	int z=80;
	if(x==30){
		int x=80;
		int r=34;
		float d=45.23;
		// int z=90;
		cout<<"value of x is "<<x<<endl; //80
		cout<<"value of r is "<<r<<endl; //34
		cout<<"value of z is "<<::z<<endl;//690
		cout<<"value of d is "<<d<<endl; //45.23

	}
	else{
		int u=31;
		float f=70.32;
		cout<<"value of u is "<<u<<endl;//31
		cout<<"value of f is "<<f<<endl;//70.32
		cout<<"value of z is "<<z<<endl;//80
		// cout<<"value of d is "<<d<<endl; //error
		// cout<<"value of r is "<<r<<endl;//rrror
	


	}
		// cout<<"value of u is "<<u<<endl;
		cout<<"value of f is "<<f<<endl;//42.23
		cout<<"value of z is "<<z<<endl;
		// cout<<"value of d is "<<d<<endl;
		// cout<<"value of r is "<<r<<endl;




	
	return 0;
}