#include<iostream>
using namespace std;

int main(){
	char arr[100];
	int no;
	cin>>no;
	cin.ignore();
	cin.ignore();//one char ignore
	cin.getline(arr,100);

	cout<<no<<endl;
	cout<<arr<<endl;



	return 0;
}