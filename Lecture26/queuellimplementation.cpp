#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;

	node(int d){
		data=d;
		next=NULL;
	}
};
class Queue{
	node*head;
	node*tail;
	int len;
public:
	Queue(){
		head=NULL;
		tail=NULL;
		len=0;

	}
	// push
	// insertattail


	void push(int d){
		node*n=new node(d);
		if(head==NULL){
			// ll khali hai
			head=n;
			tail=n;
			// len++;
		}
		else{
			tail->next=n;
			tail=n;
			// len++;
		}
		len++;
	}



	// pop
	void pop(){
		// deletionatfront
		if(head==NULL){
			// ll khali hai
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=NULL;
			tail=NULL;
			len--;
		}
		else{
			// multiple nodes
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
			len--;
		}
		// len--;
	}


	// front
	int front(){
		if(head==NULL){
			return -1;
		}
		return head->data;

	}




	// size
	int size(){
		return len;
	}


	// empty
	bool empty(){
		return len==0;
	}

};
int main(){
	Queue q;
	q.push(3);
	q.push(13);
	q.push(33);
	q.push(32);
	q.push(53);

	// print
	while(!q.empty()){
		cout<<q.front()<<" ";
	q.pop();


	}
	// q.len;

	cout<<endl;
	




	return 0;
}