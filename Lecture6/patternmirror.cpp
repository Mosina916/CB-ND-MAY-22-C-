#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	// upper half
	int rowno=1;
	while(rowno<=(n/2)+1){
		// spaces
	int sp=1;
	while(sp<=(n/2)+1-rowno){
		cout<<' '<<'\t';
		sp=sp+1;
	}
	// stars
	int sc=1;
	while(sc<=2*rowno-1){
		cout<<'*'<<'\t';
		sc=sc+1;

	}
	cout<<endl;
	rowno++;


	}


	// lower half
	rowno=1;
	while(rowno<=n/2){
		// spaces
	int spac=1;
	while(spac<=rowno){
		cout<<' '<<'\t';
		spac++;
	}
	// stars
	int starcou=1;
	int j=n-(2*rowno);
	while(starcou<=j){
		cout<<'*'<<'\t';
		starcou++;
	}
	cout<<endl;
	rowno++;

	}
	
	






	return 0;  
}


	