#include<iostream>
using namespace std;
int main(){

	string s;
	cin>>s;//"9999458315"
	int i=0;
	if(s[i]=='9'){
		i++;
	}

	for(;s[i]!='\0';i++){
			char ch=s[i];//'5'
	int t=ch-'0';//5
	if(9-t<=4){
		t=9-t;//4


	}
	s[i]=t+'0';

	}

	cout<<s<<endl;






	return 0;
}