#include "myownstackheaderfile.h"
int main()
{
	// stack s;
	// Stack<char>s;

	Stack<char>s;
	s.push('A');
	s.push('Z');
	s.push('F');
	s.push('P');
	s.push('?');

	// cout<<s.v[2]<<endl;
	while(!s.empty()){
		cout<<s.top()<<" ";//13
	s.pop();
	}

	cout<<endl;
	


	
	return 0;
}