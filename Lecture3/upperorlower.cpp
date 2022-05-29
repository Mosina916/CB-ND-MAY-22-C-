#include<iostream>
// #include<climits>
using namespace std;
int main(){
	
	char ch;
	cin>>ch;//'B'
	// if(ch>='A'&&ch<='Z'){
	// 	cout<<"uppercase "<<endl;
	// }
	// else if(ch>='a'&&ch<='z'){
	// 	cout<<"lowercase "<<endl;

	// }
	// else{
	// 	cout<<"other character"<<endl;

	// }

	// if(ch>=65&&ch<=90){
	// 	cout<<"uppercase "<<endl;
	// }
	// else if(ch>=97&&ch<=122){
	// 	cout<<"lowercase "<<endl;

	// }
	// else{
	// 	cout<<"other character"<<endl;

	// }

	if(isupper(ch)){
		cout<<"uppercase "<<endl;
	}
	else if(islower(ch)){
		cout<<"lowercase "<<endl;

	}
	else{
		cout<<"other character"<<endl;

	}








	return 0;
}