#include<iostream>
using namespace std;
string s[]={"zero","one","Two","Three","four","Five","six","seven","Eight","Nine"};
void inttowordsdec(int n){//2048
	// base case
	if(n==0){
		return;
	}


	// recursive case
	int ld=n%10;//2048%10-->8
	cout<<s[ld]<<" ";
	inttowordsdec(n/10);


}


void inttowordsinc(int n){//2048
	// base case
	if(n==0){
		return;
	}
	

	// recursive case
	int ld=n%10;//2048%10-->8
	inttowordsinc(n/10);
	cout<<s[ld]<<" ";
	


}
int main(){

	// n>0
	// int n;
	// cin>>n;//2048
	// if(n==0){
	// 	cout<<"zero"<<endl;
	// }
	// else{
	// 	inttowordsdec(n);

	// }

	int n;
	cin>>n;//2048
	if(n==0){
		cout<<"zero"<<endl;
	}
	else{
		inttowordsinc(n);

	}
	
	



	return 0;
}