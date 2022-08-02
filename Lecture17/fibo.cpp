#include<iostream>
using namespace std;
int fibo(int pos){//0
	// base case/stoping condition
	// if(pos==0||pos==1){
	// 	return pos;
	// }
	if(pos==1){
		return 1;
	}
	if(pos==0){
		return 0;
	}

	// recursive case

	// ?without  storing
	return fibo(pos-1)+fibo(pos-2);

	// store 
	// int ans1=fibo(pos-1);//2
	// int ans2=fibo(pos-2);//1

	// int finaans=ans1+ans2;

	// return finaans;
}
int main(){
	int pos;
	cin>>pos;//4
	cout<<fibo(pos)<<endl;
	

	return 0;
}