#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int rowno=1;rowno<=n;rowno=rowno+1){
	// int rowno=1;
	// while(rowno<=n){
		// rowno -->3-->even
	if((rowno%2)==0){
		// even row
		int startval=0;
		// int countno=1;
		for(int countno=1;countno<=rowno;countno=countno+1){
// loop
		// while(countno<=rowno){
			cout<<startval<<" ";
		// countno=countno+1;//5
		startval=1-startval;//1

		}
		cout<<endl;
		// rowno=rowno+1;
	}
	else{
		// int countnum=1;
		int starval=1;
		for(int countnum=1;countnum<=rowno;countnum=countnum+1){
// loop
		// while(countnum<=rowno){
			cout<<starval<<" ";
			// countnum=countnum+1;//4
			starval=1-starval;//0
		}
		cout<<endl;
		// rowno=rowno+1;
		
	}
	}
	return 0;
}