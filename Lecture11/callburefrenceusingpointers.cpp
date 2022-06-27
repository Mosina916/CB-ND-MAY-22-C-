#include<iostream>
using namespace std;
void update(int*zptr){//* is datatype part
	*zptr=*zptr+100;//* is derefer operator
	cout<<*zptr<<endl;

}
int main(){
	int z=40;
	
	// int *zptr=&z;
	update(&z);

	cout<<z<<endl;



	return 0;
}