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

void printll(node*head){
	node*temp=head;

	while(temp!=NULL){
		cout<<temp->data<<" ";//94
	temp=temp->next;

	}
	cout<<endl;
	
}
int lengthofllrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}



	// rec case
	return 1+lengthofllrec(head->next);
}






node* midofll(node*head){
	node*slow=head;
	node*fast=head->next;

while(fast!=NULL and fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;

}

return slow;
	

}

// merge two sorted ll
// 1 3 5 9 10
// 2 4 6

// 1 2 3 4 5 6 9 10 o/p

node*mergetwosortedll(node*head1,node*head2){
	// case 1 ll1 is empty
	if(head1==NULL){
		return head2;

	}
	// case 2 ll2 is empty
	else if(head2==NULL){
		return head1;
	}
	else{
		node*newhead=NULL;
		if(head1->data<head2->data){
			newhead=head1;
			newhead->next=mergetwosortedll(head1->next,head2);
			// return newhead;
		}
		else{
			newhead=head2;
			newhead->next= mergetwosortedll(head1,head2->next);
			// return newhead;

		}
		return newhead;

	}
	// return newhead;

}

node*mergesort(node*head){
	// base case
	// ll is empty
	// if(head==NULL){
	// 	return head;
	// }
	// // ll is single sode
	// if(head->next==NULL){
	// 	return head;
	// }

	if(head==NULL||head->next==NULL){
		return head;
	}



	// recursive case
	// step 1 find mid point 

	node*m=midofll(head);
	// cout<<m->data<<endl;
	node*temp=m->next;
	m->next=NULL;

	// step 2 rec 2 sort


	head=mergesort(head);

	temp=mergesort(temp);
	node*newhead=mergetwosortedll(head,temp);
	return newhead;


}
// v v important
node*reversell(node*head){
	node*curr=head;
	node*prev=NULL;

	while(curr!=NULL){

	node*n=curr->next;
	curr->next=prev;
	prev=curr;
	curr=n;

	}
	head=prev;
	return head;

}

bool cyclepresentornot(node*head){
	node*slow=head;
	node*fast=head;

while(fast!=NULL and fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		return true;
	}

}

return false;

	
}


void createcycle(node*head,node*tail){
	tail->next=head->next->next;

}





int main(){
	// node*head1=NULL;
	// node*tail1=NULL;
	// int data;
	// int n;
	// cin>>n;
	// for(int i=1;i<=n;i++){
	// 	cin>>data;
	// insertatfront(head1,tail1,data);//12 2 3 5 4

	// }


	// node*head2=NULL;
	// node*tail2=NULL;

	// int m;
	// cin>>m;
	// for(int i=1;i<=m;i++){
	// 	cin>>data;
	// insertatfront(head2,tail2,data);//12 2 3 5 4

	// }


	// node*nptr=mergetwosortedll(head1,head2);
	// printll(nptr);

	node*head=NULL;
	node*tail=NULL;
	int data;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>data;
	insertatfront(head,tail,data);//5 7 4 3 2

	}
	printll(head);

	// if(cyclepresentornot(head)){
	// 	cout<<"cycle is present"<<endl;

	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;

	// }

	createcycle(head,tail);
	// if(cyclepresentornot(head)){
	// 	cout<<"cycle is present"<<endl;

	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;

	// }

	printll(head);
	// node*newhead=reversell(head);
	// printll(newhead);

	// node*nhead=mergesort(head);
	// printll(nhead);


	
	return 0;
}