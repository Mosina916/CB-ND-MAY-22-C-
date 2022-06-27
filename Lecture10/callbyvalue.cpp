#include<iostream>
using namespace std;
void update(int a){
	a=a+100;
	cout<<"value of a inside update fun is "<<a<<endl;


}
int main(){
	int a=10;
	cout<<"value of a is "<<a<<endl;

	update(a);
	cout<<"value of a inside main fun is "<<a<<endl;



	return 0;
}