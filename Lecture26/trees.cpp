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
node* buildtree(){
	node*root=NULL;
	int data;
	cin>>data;//8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
	if(data==-1){
		return NULL;
	}
	else{
		root=new node(data);
	root->left=buildtree();//lst
	root->right=buildtree();//rst
		return root;


	}

	


}

void preorderprint(node*root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	preorderprint(root->left);
	preorderprint(root->right);

}

void inorderprint(node*root){
	if(root==NULL){
		return;
	}

	
	inorderprint(root->left);
	cout<<root->data<<" ";
	inorderprint(root->right);

}

void postorderprint(node*root){
	if(root==NULL){
		return;
	}

	
	 postorderprint(root->left);
	
	 postorderprint(root->right);
	 cout<<root->data<<" ";

}

int main(){
	node*root=buildtree();

	cout<<"pre order is : ";
	preorderprint(root);
	cout<<endl;
	cout<<"in order is : ";
	inorderprint(root);
	cout<<endl;
	cout<<"post order is : ";
	postorderprint(root);
	cout<<endl;




	return 0;
}