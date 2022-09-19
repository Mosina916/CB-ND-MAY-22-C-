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
node* deleteinbst(node*root,int key){//7
	if(root==NULL){
		return NULL;
	}
	// case 1 if key lies in lst
	if(key<root->data){
		root->left=deleteinbst(root->left,key);
		return root;
	}
	// case 2 if key lies in rst
	else if(key>root->data){
		root->right=deleteinbst(root->right,key);
		return root;

	}
	else{
		// root itself is key\

		// case 1 root has no child
		if(root->left==NULL and root->right==NULL){
			delete root;
			return NULL;
		}

		// case 2 root has only lst 
		else if(root->left!=NULL and root->right==NULL){
			node*temp=root->left;
			delete root;
			return temp;
		}
		// case 3 root has only rst 
		else if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			return temp;
		}
		else{
			// case 4 root has lst and  rst  both  
			// // i am replacing root node from larget element in lst
			// node*temp=root->left;

			// while(temp->right!=NULL){
			// 	temp=temp->right;

			// }
			// swap(root->data,temp->data);
			// root->left=deleteinbst(root->left,key);
			// return root;


			// i am replacing root node from smallest element in rst
			node*temp=root->right;

			while(temp->left!=NULL){
				temp=temp->left;

			}
			swap(root->data,temp->data);
			root->right=deleteinbst(root->right,key);
			return root;
			

		}
	}
}



void preorderprint(node*root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ,";
	preorderprint(root->left);
	preorderprint(root->right);
}
void inorderprint(node*root){
	if(root==NULL){
		return;
	}	
	inorderprint(root->left);
	cout<<root->data<<" ,";
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
void Rightview(node*root,int level,int &maxleveltraversetillnow){
	// base case
	if(root==NULL){
		return;
	}
	// rec case

	if(level>maxleveltraversetillnow){
		cout<<root->data<<" ";
		maxleveltraversetillnow++;//1
	}
	

	Rightview(root->right,level+1,maxleveltraversetillnow);
	Rightview(root->left,level+1,maxleveltraversetillnow);


}

void leftview(node*root,int level,int &maxleveltraversetillnow){
	// base case
	if(root==NULL){
		return;
	}


	// rec case

	if(level>maxleveltraversetillnow){
		cout<<root->data<<" ";
		maxleveltraversetillnow++;//1
	}
	


	leftview(root->left,level+1,maxleveltraversetillnow);
	leftview(root->right,level+1,maxleveltraversetillnow);


}


int main(){
	node*root=buildbst();

	inorderprint(root);
	cout<<endl;
	preorderprint(root);
	// printlevelwise(root);

	// int key;
	// cin>>key;
	// root=deleteinbst(root,key);
	// printlevelwise(root);

	// int k=0;

	// Rightview(root,1,k);
	// cout<<endl;
	// cout<<endl;
	// k=0;
	// leftview(root,1,k);



	return 0;
}