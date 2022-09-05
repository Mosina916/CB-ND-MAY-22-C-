#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
void printstack(stack<int> s){
		while(!s.empty()){
		cout<<s.top()<<" ";//13
	s.pop();
	}

	cout<<endl;
}

void insertatbottom(stack<int> &s,int topelement){
	// base
	if(s.empty()){
		s.push(topelement);
		return;
	}


	// recursive case
	int y=s.top();
	s.pop();
	insertatbottom(s,topelement);
	s.push(y);
}

void reversestackusingrec(stack<int> &s){
	// ?base case
	if(s.empty()){
		return;
	}



	// recusrive case
	int topelement=s.top();
	s.pop();
	reversestackusingrec(s);
	insertatbottom(s,topelement);


}
int main(){
	stack<int> s;
	s.push(2);
	s.push(3);
	s.push(6);
	s.push(0);
	
	 
	printstack(s);


	reversestackusingrec(s);
	printstack(s);

	
	




	return 0;

}