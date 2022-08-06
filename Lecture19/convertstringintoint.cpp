#include<iostream>
using namespace std;

int stringtoint(string s,int len){
	// base case
	if(len==0){
		return 0;
	}


	// recursive case
	char ch=s[len-1];//'4'
	int x=ch-'0';//4
	return stringtoint(s,len-1)*10+x;
}

int main(){
	string s;
	cin>>s;//"234"


	// s+"100";
	int len=s.length();
	cout<<stringtoint(s,len)+100<<endl;
	return 0;
}