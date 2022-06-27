#include<iostream>
using namespace std;
int main(){
	int y=10;
	int *yptr=&y;
	int **zptr=&yptr;
	int***cptr=&zptr;

	cout<<(*(*(*cptr)))<<endl;


	cout<<yptr<<endl;
	cout<<zptr<<endl;
	cout<<cptr<<endl;

	// int *aptr;
	// int *bptr;
	// int *cptr;
	// int *aptr,*bptr,*cptr;
	



	return 0;
}