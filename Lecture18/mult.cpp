#include<iostream>
using namespace std;
int mult(int a,int b){
	// base case
	if(b==0){
		return 0;
	}


	// recursive case
	return a+mult(a,b-1);//2+6
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<mult(a,b)<<endl;

	return 0;
}