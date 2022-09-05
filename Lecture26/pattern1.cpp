// * * * * * * * 
//   * * * * *
//     * * *
//       *

#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;


	// int row 1;
	// spaces print
	int rowno=1;
	while(rowno<=trows){
		// =================================
	int spc=1;
	while(spc<=rowno-1){
		cout<<" ";
	spc=spc+1;//2

	}

	int startcount=1;

	while(startcount<=(2*trows-2*rowno+1)){
		cout<<"*";
	startcount=startcount+1;//2

	}
	cout<<endl;
	rowno=rowno+1;

	// =================================

	}


	
	



	return 0;
}