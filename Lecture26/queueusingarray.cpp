#include<iostream>
using namespace std;
class Queue{
	int *arr;
	int ts;
	int cs;
	int f;
	int r;
public:

	Queue(int s){
		arr=new int[s];
		ts=s;
		cs=0;
		f=0;
		r=s-1;


	}
	// push
	void push(int d){

		if(cs<ts){
			r=(r+1)%ts;
		arr[r]=d;
		cs++;

		}
		else{
			cout<<"overflow"<<endl;
		}
		
	}


	// pop
	void pop(){

		if(cs>0){
			f=(f+1)%ts;
		cs--;

		}
		else{
			cout<<"underflow"<<endl;
		}
		
	}

	// front
	int front(){
		if(cs==0){
			return -1;

		}
		return arr[f];
	}


	// empty
	bool empty(){
		return cs==0;
	}


	// size
	int size(){
		return cs;

	}
};

int main(){
	Queue q(5);
	q.push(3);
	q.push(13);
	q.push(33);
	q.push(32);
	q.push(53);
	q.push(783);
	q.push(73);
	// q.pop();
	q.pop();
	q.push(0);



	// print
	while(!q.empty()){
		cout<<q.front()<<" ";
	q.pop();


	}
	// q.len;return arr[f];

	cout<<endl;
	




	return 0;
}