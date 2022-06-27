#include<iostream>
using namespace std;
// int sum(int a){
// 	int s=a;
// 	// cout<<s<<endl;
// 	return s;

// }
// int  sum(int a,int b){
// 	int s=a+b;
// 	// cout<<s<<endl;
// 	return s;

// }
// // int sum(int a,float b){
// // 	float s=a+b;
// // 	cout<<s<<endl;

// // }
// int sum(int a,int b,int c){
// 	int s=a+b+c;
// 	// cout<<s<<endl;
// 	return s;

// }
// int sum(int a,int b,int c,int d){
// 	int s=a+b+c+d;
// 	// cout<<s<<endl;
// 	return s;

// }
// int sum(int a,int b,int c,int d,int e){
// 	int s=a+b+c+d+e;
// 	// cout<<s<<endl;
// 	return s;

// }

int sum(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0,int g=0){
	return a+b+c+d+e+f+g;

}
int main(){

	cout<<sum(3)<<endl;
	cout<<sum(5,4)<<endl;
	cout<<sum(12,23,43)<<endl;
	cout<<sum(23,12,43,54)<<endl;
	cout<<sum(65,2,4,5,8)<<endl;

	
	return 0;
}