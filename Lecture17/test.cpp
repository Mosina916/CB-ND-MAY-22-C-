#include<iostream>
using namespace std;
int fact(int n){//0
	// base case
	if(n==0){
		return 1;
	}
	// recusrive case
	// int chotans=fact(n-1);//24
	// // with the help of 1 and 2 calculate the final ans
	// int finalans=n*chotans;//120
	// return finalans;
	// without storing 
	return n*fact(n-1);//5*24-->120

}
int main(){
	int n;
	cin>>n;//-3
	if(n<0){
		return 0;
	}
	else{
		cout<<fact(n)<<endl;

	}
	

	return 0;
}