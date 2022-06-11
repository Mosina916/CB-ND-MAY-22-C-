#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<'*'<<endl;
	}
	else{
		// upper part
	// row no 1st
	int rowno=1;
	int cnt=1;
	while(cnt<=n){
		cout<<'*'<<'\t';
		cnt=cnt+1;

	}
	cout<<endl;
	rowno=rowno+1;//2
	while(rowno<=n/2+1){
		// stars
	int cntst=1;
	while(cntst<=(n/2)-rowno+2){
		cout<<'*'<<'\t';
		cntst=cntst+1;
	}
	// spaces
	int cs=1;
	while(cs<=2*rowno-3){
		cout<<" "<<'\t';
		cs=cs+1;
	}
	// stars
	cntst=1;
	while(cntst<=(n/2)-rowno+2){
		cout<<'*'<<'\t';
		cntst=cntst+1;
	}
	cout<<endl;
	rowno=rowno+1;//3

	}
	
	// lower part
	rowno=1;
	while(rowno<=n/2-1){
		// stars
	int css=1;
	while(css<=rowno+1){
		cout<<'*'<<'\t';
		css=css+1;
	}
	// spaces
	int sp=1;
	while(sp<=(n-2)-(2*rowno)){
		cout<<' '<<'\t';
		sp=sp+1;
	}

	// stars
	css=1;
	while(css<=rowno+1){
		cout<<'*'<<'\t';
		css=css+1;
	}
	cout<<endl;
	rowno=rowno+1;
	

	}

	// last row 

	cnt=1;
	while(cnt<=n){
		cout<<'*'<<'\t';
		cnt=cnt+1;

	}
	cout<<endl;


	}
	
	




	return 0;  
}


	