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

bool searchinbst(node*root,int key){//6

	// base casef(root0-)

	if(root==NULL){
		return false;
	}


	// rec case
	if(root->data==key){
		return true;
	}
	else if(key<root->data){
		return searchinbst(root->left,key);
	}
	else{
		return searchinbst(root->right,key);

	}




}
int main(){
	node*root=buildbst();

	printlevelwise(root);
	int key;
	cin>>key;
	if(searchinbst(root,key)){
		cout<<"present"<<endl;

	}
	else{
		cout<<"absent"<<endl;
	}




	return 0;
}