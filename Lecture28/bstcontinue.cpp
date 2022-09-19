#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};


node* insertinbst(node*root,int da){
	if(root==NULL){
		root=new node(da);
		return root;

	}
	else if(da<=root->data){//6<=8
		root->left=insertinbst(root->left,da);//NULL 3
		return root;

	}
	else{
		root->right=insertinbst(root->right,da);
		return root;
	}

}

node* buildbst(){
	node*root=NULL;
	int data;
	cin>>data;//8
	while(data!=-1){
		root=insertinbst(root,data);//600 6
		cin>>data;///6

	}


	return root;


}
// level wise print

void printlevelwise(node*root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);


// loop
	while(!q.empty()){
		node*x=q.front();//600
	q.pop();


	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}

	}
	else{
		cout<<x->data<<" ";
		if(x->left!=NULL){
			q.push(x->left);


		}
		if(x->right!=NULL){
			q.push(x->right);
			
		}
	}

	}
	

}
// print in ramge k1 se k2 in sorted order
void printinrangek1tok2(node*root,int k1,int k2){
	// base case
	if(root==NULL){
		return;
	}


	// rec case
	printinrangek1tok2(root->left,k1,k2);//4 6 7
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	printinrangek1tok2(root->right,k1,k2);

}

void printinrangek1tok2rev(node*root,int k1,int k2){
	// base case
	if(root==NULL){
		return;
	}


	// rec case
	printinrangek1tok2rev(root->right,k1,k2);
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	printinrangek1tok2rev(root->left,k1,k2);//4 6 7
	

}

bool isbstornot(node*root,int min=INT_MIN,int max=INT_MAX){
	// base case
	if(root==NULL){
		return true;
	}


	// rec case
	if((root->data>=min and root->data<=max) and isbstornot(root->left,min,root->data) and isbstornot(root->right,root->data+1,max)){
		return true;
	}
	return false;

}
class Pair{
public:
	int hei;
	bool isbal;
	Pair(){
		hei=0;
		isbal=true;
	}

};
Pair isbalanecornot(node*root){
	Pair p;
	// base case
	if(root==NULL){
		// p.hei=0;
		// p.isbal=true;
		return p;
	}


	// rec case
	Pair l=isbalanecornot(root->left);
	Pair r=isbalanecornot(root->right);
	p.hei=max(l.hei,r.hei)+1;
	if(l.isbal==true and r.isbal==true and abs(l.hei-r.hei)<=1){
		p.isbal=true;
	}
	else{
		p.isbal=false;

	}

	return p;
	
}

// bst to sorted ll
class linkedll{
public: 
	node*head;
	node*tail;
	linkedll(){
		head=NULL;
		tail=NULL;
	}

};
linkedll bsttosortedll(node*root){
	linkedll l;
	// base case
	if(root==NULL){
		return l;
	}


	// rec case
	// case 1: no child
	if(root->left==NULL and root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;
	}
	// case 2 : only lst
	else if(root->left!=NULL and root->right==NULL){
		linkedll lstll=bsttosortedll(root->left);
		lstll.tail->right=root;
		l.head=lstll.head;
		l.tail=root;
		// return l;


	}
	// case 3 : only rst
	else if(root->left==NULL and root->right!=NULL){
		linkedll rstt=bsttosortedll(root->right);
		root->right=rstt.head;
		l.head=root;
		l.tail=rstt.tail;
		// return l;

	}

	// case 4: both lst and rst
	else{
		linkedll lstll=bsttosortedll(root->left);
		linkedll rstll=bsttosortedll(root->right);
		lstll.tail->right=root;
		root->right=rstll.head;
		l.head=lstll.head;
		l.tail=rstll.tail;

		// return l;

	}
	return l;

}

void printll(node*root){

	while(root!=NULL){
		cout<<root->data<<" ";
	root=root->right;

	}
	cout<<endl;
	

}
int arr[]={1,3,4,6,9,10,11,12};

node*sortedarratobst(int s,int e){
	// base case
	if(s>e){
		return NULL;
	}


	// recur case
	int mid=(s+e)/2;
	node*root=new node(arr[mid]);
	root->left=sortedarratobst(s,mid-1);
	root->right=sortedarratobst(mid+1,e);

	return root;


}
int main(){
	// node*root=buildbst();

	// printlevelwise(root);
	int n=sizeof(arr)/sizeof(int);
	node*root=sortedarratobst(0,n-1);
	printlevelwise(root);



	// linkedll x=bsttosortedll(root);

	// printll(x.head);
	// Pair x=isbalanecornot(root);

	// if(x.isbal){
	// 	cout<<"yes height balanced"<<endl;
	// }
	// else{
	// 	cout<<"Not height balanced"<<endl;

	// }
	// int k1,k2;
	// cin>>k1>>k2;
	// printinrangek1tok2(root,k1,k2);
	// printinrangek1tok2rev(root,k1,k2);
	// if(isbstornot(root)){
	// 	cout<<"yes bst"<<endl;

	// }
	// else{
	// 	cout<<"no not bst"<<endl;


	// }

	



	return 0;
}