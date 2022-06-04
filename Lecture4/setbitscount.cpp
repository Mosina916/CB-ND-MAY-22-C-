#include <iostream>
using namespace std;

int main(){
	int no;
	cin>>no;
	int count=0;

// loop
	while(no>0){
		int ld=no&1;//1001&1-->1. 100&1-->0 10&1-->0 1&1
	if(ld==1){
		count++;//2
	}
	no=no>>1;//1001>>1-->100>>1-->10>>1 1>>1

	}

	cout<<"no of setbits are "<<count<<endl;
	


	return 0;	
}


	