#include<iostream>
#include<queue>
using namespace std;
class Stack{
	queue<int>q1;
	queue<int>q2;
public:
	// push
	void push(int d){
		if(q1.empty() and q2.empty()){
			// i am using q1
			q1.push(d);
		}
		else if(!q1.empty() and q2.empty()){
			q1.push(d);

		}
		else{
			q2.push(d);
		}
	}


	// pop


	void pop(){
		if(q1.empty() and q2.empty()){
			return;
		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
		}
		else{
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();

		}
	}


	// top

	int top(){
		int ele;
		if(q1.empty() and q2.empty()){
			return -1;
		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			ele=q1.front();//63
			q2.push(q1.front());
			q1.pop();
		}
		else{
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			ele=q2.front();
			q1.push(q2.front());
			q2.pop();

		}
		return ele;

	}

	// size
	int size(){
		if(q1.empty() and q2.empty()){
			return 0;
		}
		else if(!q1.empty() and q2.empty()){
			return q1.size();
		}
		else{
			return q2.size();

		}
	}

	// empty
	bool empty(){
		return q1.empty() and q2.empty();
	}


};


int main(){
	Stack s;
	s.push(30);
	s.push(60);
	s.push(90);
	s.push(33);
	s.pop();
	s.pop();
	s.push(53);
	s.push(63);
	s.pop();
	cout<<s.top()<<endl;


	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;



	



	return 0;
}