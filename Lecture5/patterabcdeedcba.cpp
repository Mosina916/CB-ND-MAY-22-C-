#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int rowno=1;
	while(rowno<=n){
		int countinc=1;
	char startchar='A';

// 
	while(countinc<=n-rowno+1){
		cout<<startchar<<" ";
		countinc=countinc+1; //4
		startchar=startchar+1;//66-->'B' 67-->C 67+1-->68-->D
		

	}
	startchar=startchar-1; //C
	int decco=1;


	while(decco<=n-rowno+1){
		cout<<startchar<<" ";
		decco++;//4
		startchar=startchar-1;//A

	}
	cout<<endl;
	rowno=rowno+1;

	}
	




	
	return 0;
}