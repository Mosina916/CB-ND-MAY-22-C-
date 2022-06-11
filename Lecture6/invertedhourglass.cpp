#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	// upper half
	while(rowno<=n){
		// stars
	int countst=1;
	int startprint=n;

	while(countst<=rowno){
		// cout<<'*'<<' ';
		cout<<startprint<<' ';
		startprint--;

		countst++;
	}
	// spaces
	int sp=1;
	while(sp<=(2*n+1)-(2*rowno)){
		cout<<' '<<' ';
		sp++;
	}
	// stars
	countst=1;
	int stpr=n+1-rowno;
	while(countst<=rowno){
		// cout<<'*'<<' ';
		cout<<stpr<<' ';
		stpr++;
		countst++;
	}
	cout<<endl;
	rowno++;

	}
	// beech wala row
	int c=1;
	int startpr=n;
	while(c<=2*n+1){
		// cout<<'*'<<' ';
		cout<<abs(startpr)<<' ';
		startpr--;
		c++;
	}
	cout<<endl;

	// lower half
	rowno=0;
	while(rowno<=n-1){
		// stars
	int scc=1;
	int stpri=n;

	while(scc<=n-rowno){
		// cout<<'*'<<' ';
		cout<<stpri<<' ';
		stpri--;
		scc++;
	}
	// spaces
	int spc=1;
	while(spc<=2*rowno+1){
		cout<<' '<<' ';
		spc++;
	}

	// stars
	scc=1;
	int sppp=rowno+1;
	while(scc<=n-rowno){
		// cout<<'*'<<' ';
		cout<<sppp<<' ';
		sppp++;
		scc++;
	}
	rowno++;
	cout<<endl;

	}

	



	




	return 0;  
}


	