#include <iostream>
using namespace std;

int main(){
	int a=20,b=-1,c=1,d=0;
	if(a==20&&b++&&--c){
		cout<<"hello"<<endl;
	}
	else if(b--&&c++&&d--){
		cout<<"world"<<endl;

	}
	else if(a++&&b--&&--c&&d++){
		cout<<"coding"<<endl;
	}
	else if(a++&&++b&&--c&&d++){
		cout<<"Blocks"<<endl;

	}
	else{
		cout<<"padai kar lo "<<endl;
	}

	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;


	// if(-3){
	// 	cout<<"coding"<<endl;
	// }
	// else{
	// 	cout<<"blocks"<<endl;
	// }

	return 0;	
}


	