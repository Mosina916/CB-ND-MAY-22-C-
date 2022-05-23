#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int no=1;
	int rowno=1;
while(rowno<=n){
	
	// / ======================================
	// rowno=3;
	int countstars=1;

// loop
	while(countstars<=rowno){
		cout<<no<<" ";
		no=no+1;
	countstars=countstars+1;//4


	}
	cout<<endl;
	rowno=rowno+1;
	// ======================================

}

	

	return 0;//end of program
}