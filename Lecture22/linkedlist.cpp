#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;//self refrential class 
	// constor
	node(int d){
		data=d;
		next=NULL;
	}
};
void insertatfront(node*&head,node*&tail,int d){
	node*n=new node(d);
	//ll khali hai
	if(head==NULL and tail==NULL){
		head=n;
		tail=n;

	}
	//ll khali nahi hai
	else{
		n->next=head;
		head=n;

	}
}
void insertattail(node*&head,node*&tail,int d){
	node*n=new node(d);
	if(head==NULL and tail==NULL){
		head=n;
		tail=n;


	}
	else{
		tail->next=n;
		tail=n;
	}
}
void printll(node*head){
	node*temp=head;

	while(temp!=NULL){
		cout<<temp->data<<" ";//94
	temp=temp->next;

	}
	cout<<endl;
	
}
int lengthofll(node*head){
	int co=0;
	node*temp=head;
	while(temp!=NULL){
		co++;
	temp=temp->next;

	}

	return co;
	

}

void insertatanyposition(node*&head,node*&tail,int position,int d){
	if(position==0){
		insertatfront(head,tail,d);
	}
	else if(position>=lengthofll(head)){
		insertattail(head,tail,d);
	}
	else{
		node*n=new node(d);

		node*temp=head;
		for(int jump=1;jump<=position-1;jump++){
			temp=temp->next;
		}

		n->next=temp->next;
		temp->next=n;

		//


	}
}

void deleteatfront(node*&head,node*&tail){
	// case 1 ll is empty
	if(head==NULL){
		return;
	}
	// case 2 ll single node
	else if(head->next==NULL){
		delete head;
		head=NULL;
		// tail=NULL;
	}

	// case 3 ll multiple node
	else{
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
	}

}
int lengthofllrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}



	// rec case
	return 1+lengthofllrec(head->next);
}

void deleteattail(node*&head,node*&tail){
	// case 1 ll is empty
	if(head==NULL){
		return;
	}
	// case 2 ll single node
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}

	// case 3 multiple nodes
	else{
		node*temp=head;
		for(int jump=1;jump<=lengthofll(head)-2;jump++){
			temp=temp->next;

		}

		delete tail;
		tail=temp;
		tail->next=NULL;
	}



}

void deleteatanyposition(node*&head,node*&tail,int pos){
	if(pos==0){
		deleteatfront(head,tail);
	}
	else if(pos>=lengthofll(head)-1){
		deleteattail(head,tail);
	}
	else{

		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}
		node*a=temp->next;
		temp->next=a->next;
		a->next=NULL;
		delete a;
		a=NULL;


	}
}

int main(){
	node*head=NULL;
	node*tail=NULL;
	insertatfront(head,tail,7);
	insertatfront(head,tail,4);
	insertatfront(head,tail,94);
	insertattail(head,tail,56);
	insertattail(head,tail,96);
	insertatanyposition(head,tail,3,47);
	printll(head);

	// deleteatfront(head);
	// deleteattail(head,tail);
	deleteatanyposition(head,tail,3);


	printll(head);
	cout<<lengthofllrec(head)<<endl;

	
	return 0;
}