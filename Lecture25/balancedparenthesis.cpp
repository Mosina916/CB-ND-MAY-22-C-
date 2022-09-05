#include<iostream>
#include<stack>
using namespace std;
bool isbalanced(char arr[]){
	stack<char> s;
	for(int i=0;arr[i]!='\0';i++){

		char c=arr[i];//)
	switch(c){
		case '{':
		case '[':
		case '(':
		s.push(c);
		break;
		case ')':
		if(!s.empty() and s.top()=='('){
			s.pop();
		}
		else{
			return false;
		}
		break;

		case ']':
		if(!s.empty() and s.top()=='['){
			s.pop();
		}
		else{
			return false;
		}
		break;
		
		case '}':
		if(!s.empty() and s.top()=='{'){
			s.pop();
		}
		else{
			return false;
		}
		break;

		}

	}

	if(s.empty()){
		return true;
	}

	return false;
	



}

int main(){
	// string s
	char arr[]="{[(a+b)+c]+d}";

	if(isbalanced(arr)){
		cout<<"balanced"<<endl;

	}
	else{
		cout<<"not balanced"<<endl;

	}


	return 0;

}