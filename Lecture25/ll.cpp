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

void breakcycle(node*head){
	// check cycle hai ya nahi
	node*slow=head;
	node*fast=head;
	node*prev=NULL;

while(fast!=NULL and fast->next!=NULL){
	prev=slow;
	slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		// return true;
		break;
	}

}
slow=head;

// while(slow->next!=fast->next){
// 	// prev=prev->next;
// 	slow=slow->next;
// fast=fast->next;


// }
// fast->next=NULL;

while(slow!=fast){
	prev=prev->next;
	slow=slow->next;
fast=fast->next;


}
prev->next=NULL;



}





int main(){
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


	createcycle(head,tail);
	breakcycle(head);

	

	printll(head);
	
	return 0;
}