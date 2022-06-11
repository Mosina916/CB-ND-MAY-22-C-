#include <iostream>
using namespace std;
int main(){
	char ch;
	while(true){
		cin>>ch;//X


	if(ch=='+'){
		int n1,n2;
		cin>>n1>>n2;
		// int sum=n1+n2;
		// cout<<sum<<endl;

		cout<<n1+n2<<endl;


	}
	else if(ch=='-'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1-n2<<endl;
		

	}
	else if(ch=='/'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1/n2<<endl;
		
		
	}
	else if(ch=='*'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1*n2<<endl;
		
		
	}
	else if(ch=='%'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1%n2<<endl;
		
		
	}
	else if(ch=='X'||ch=='x'){
		return 0;
	}
	else{
		cout<<"Invalid operation. Try again."<<endl;
	}

	}
	




	return 0;  
}


	