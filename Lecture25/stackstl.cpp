#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
// class stack{


// 	push(){

// 	}
// 	pop(){

// 	}

// };
int main(){
	stack<string> s;
	s.push("hell0");
	s.push("hdgf");
	s.push("ndsvvf");
	 

	// cout<<s.v[2]<<endl;
	while(!s.empty()){
		cout<<s.top()<<" ";//13
	s.pop();
	}

	cout<<endl;
	




	return 0;

}