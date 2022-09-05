// #include<bits/stdc++.h>
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

class Stack{
	node*head;
	int len;
public:
	Stack(){
		head=NULL;
		len=0;
	}

	// push
	// insertatfront
	void push(int d){
		node*n=new node(d);
		n->next=head;
		head=n;
		len++;

	}

	// pop
	// delete at head
	void pop(){
		// ll is empty
		if(head==NULL){
			return;
		}
		//ll single node
		else if(head->next==NULL){
			delete head;
			head=NULL;
			len--;

		}
		// ll multiple node
		else{
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
			len--;
		}
	}

	// top
	int top(){
		return head->data;
	}


	// empty
	bool empty(){
		// if(head==NULL){
		// 	return true;
		// }
		// return false;
		// if(len==0){
		// 	return true;
		// }
		// // else{
		// 	return false
		// }

		return len==0;
	}

	// size
	int size(){
		return len;
	}


	
};
int main()
{
	Stack s;
	s.push(2);
	s.push(3);
	s.push(6);
	s.push(0);
	s.push(13);
	s.push(30);
	s.pop();

	// cout<<s.v[2]<<endl;
	while(!s.empty()){
		cout<<s.top()<<" ";//13
	s.pop();
	}

	cout<<endl;
	


	
	return 0;
}