#include<iostream>
using namespace std;
bool checkage(int age){
	if(age>=20){
		return true;
	}
	return false;
}
int main(){
	int age=20;
	// cout<<checkage(age)<<endl;

	if(checkage(age)==true){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}


	return 0;
}