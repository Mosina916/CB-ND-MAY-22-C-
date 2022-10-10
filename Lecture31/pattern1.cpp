#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//5
	int rowno=1;
	while(rowno<=(trows+1)/2){
		// spaces
	int spc=1;
	while(spc<=rowno-1){
		cout<<" ";
		spc=spc+1;
	}
	// stars
	int stc=1;
	while(stc<=trows+2-(2*rowno)){
		cout<<"*";
		stc=stc+1;
	}
	cout<<endl;
	rowno=rowno+1;

	}


	// rowno 3




	return 0;
}