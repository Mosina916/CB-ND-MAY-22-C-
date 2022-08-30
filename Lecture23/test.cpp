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


void bubblesortll(node*head){
	for(int i=0;i<=lengthofllrec(head)-2;i++){
		for(node*temp=head;temp->next!=NULL;temp=temp->next){
		if(temp->data >temp->next->data){
		swap(temp->data,temp->next->data);
	}	
	}

	}
	
	
}

// mid of ll without using length function

// // // 2nd mid point even
// int midofll(node*head){
// 	node*slow=head;
// 	node*fast=head;

// while(fast!=NULL and fast->next!=NULL){
// 	slow=slow->next;
// 	fast=fast->next->next;

// }

// return slow->data;
	

// }

// ist mid point even
int midofll(node*head){
	node*slow=head;
	node*fast=head->next;

while(fast!=NULL and fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;

}

return slow->data;
	

}


int kthnodefromend(node*head,int k){
	node*slow=head;
	node*fast=head;
	for(int jump=1;jump<=k-1;jump++){
		fast=fast->next;


	}
	while(fast->next!=NULL){
		slow=slow->next;
	fast=fast->next;

	}
	return slow->data;
	

}


// node* midofll(node*head){
// 	node*slow=head;
// 	node*fast=head;

// while(fast->next!=NULL){
// 	slow=slow->next;
// 	fast=fast->next->next;

// }

// return slow;
	

// }



int main(){
	node*head=NULL;
	node*tail=NULL;
	int data;
	for(int i=1;i<=6;i++){
		cin>>data;
	insertatfront(head,tail,data);//12 2 3 5 4

	}
	

	printll(head);
	cout<<"mid of ll is : "<<midofll(head)<<endl;

	// bubblesortll(head);

	cout<<"kth node from end ll is : "<<kthnodefromend(head,3)<<endl;
	

	// printll(head);

	
	return 0;
}