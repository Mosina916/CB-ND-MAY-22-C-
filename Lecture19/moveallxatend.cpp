#include<iostream>
using namespace std;
string moveallxatend(string s){
	// base case
	if(s.length()==0){
		return "";
	}



	// recursive case
	char ch=s[0];
	if(ch=='x'){
		return moveallxatend(s.substr(1))+ch;
	}
	else{
		return ch+moveallxatend(s.substr(1));

	}

}

int main(){
	string s;
	cin>>s;//"axbxc"




	cout<<moveallxatend(s)<<endl;
	
	
	
	
	return 0;
}