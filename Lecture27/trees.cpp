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

// int cou=0;
// void countleaftnodes(node*root){
// 	if(root==NULL){
// 		return;
// 	}
// 	if(root->left==NULL and root->right==NULL){
// 		cou++;
// 	}


// 	countleaftnodes(root->left);
// 	countleaftnodes(root->right);


// }



// int cou=0;
int  countleaftnodes(node*root,int &cou){
	if(root==NULL){
		ret  urn 0;
	}
	if(root->left==NULL and root->right==NULL){
		cou++;
	}


	countleaftnodes(root->left,cou);
	countleaftnodes(root->right,cou);
	return cou;

	

}

// diameter
// int cou=0;
int  countleaftnodes(node*root){
	if(root==NULL){
		return 0;
	}
	if(root->left==NULL and root->right==NULL){
		// cou++;
		return 1;
	}


	return countleaftnodes(root->left)+countleaftnodes(root->right);
	


}





// count nodes of tree
int countnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// recursive case

	return countnodes(root->left)+countnodes(root->right)+1;
}

int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// recursive case
	return max(height(root->left),height(root->right))+1;
}

int diameter(node*root){
	// base case

	// if(root==NULL or (root->left==NULL and  root->right==NULL)){
	// 	return 0;
	// }
	if(root==NULL){
		return 0;
	}

	// if((root->left==NULL and  root->right==NULL)){
	// 	return 0;
	// }
	// recu
	int op1=height(root->left)+height(root->right);//if passing through root
	int op2=diameter(root->left);//if diam is in lst
	int op3=diameter(root->right);//if diam is in rst

	return max(op1,max(op2,op3));



}

class Pair{
public:
	int dia;
	int hei;
	Pair(){
		dia=0;
		hei=0;
	}
};

Pair diameterinon(node*root){
	Pair p;
	// base case
	if(root==NULL){
		// p.dia=0;
		// p.hei=0;
		return p;
	}

	// recursive caset->
	Pair l=diameterinon(root->left);
	Pair r=diameterinon(root->right);
	p.hei=max(l.hei,r.hei)+1;


	int op1=l.hei+r.hei;
	int op2=l.dia;
	int op3=r.dia;
	p.dia=max(op1,max(op2,op3));
	return p;

}

// search key in tree
bool search(node*root,int key){
	// base case
	if(root==NULL){
		return false;
	}


	// rec case
	if(root->data==key){
		return true;
	}
	return search(root->left,key)||search(root->right,key);
}
// sum of nodes
int sumofnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// recusrive case
	return sumofnodes(root->left)+sumofnodes(root->right)+root->data;
}

void mirror(node*root){
	// baSE CASE
	if(root==NULL){
		return;
	}


	// REC case
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}
int main(){
	node*root=buildtree();
	// countleaftnodes(root,0);
	int a=0;
	cout<<countleaftnodes(root,a)<<endl;

	// cout<<cou<<endl;

	// cout<<"count of nodes is : "<<countnodes(root)<<endl;
	// cout<<"height of nodes is : "<<height(root)<<endl;
	// cout<<"total sum of nodes is : "<<sumofnodes(root)<<endl;
	// // cout<<"diameter of tree is : "<<diameter(root)<<endl;
	// Pair x=diameterinon(root);
	// cout<<"diameter is "<<x.dia<<endl;
	// cout<<"height is "<<x.hei<<endl;

	// int key;
	// cin>>key;
	// if(search(root,key)){
	// 	cout<<"yes present"<<endl;
	// }
	// else{
	// 	cout<<"Not present"<<endl;

	// }


	// cout<<"pre order is : ";
	// preorderprint(root);


	// mirror(root);

	// cout<<"pre order is : ";
	// preorderprint(root);




	// cout<<"pre order is : ";
	// preorderprint(root);
	// cout<<endl;
	// cout<<"in order is : ";
	// inorderprint(root);
	// cout<<endl;
	// cout<<"post order is : ";
	// postorderprint(root);
	// cout<<endl;




	return 0;
}