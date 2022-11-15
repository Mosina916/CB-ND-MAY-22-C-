#include<iostream>
#include<unordered_map>
using namespace std;
class node{
	public:
	char data;
	bool isterminal;
	unordered_map<char,node*> h;

	node(char ch){
		data=ch;
		isterminal=false;

	}


};
class trie{
	node*root;
public:
	trie(){
		root=new node('\0');
	}

	// insert
	void insert(char *arr){//cat
		node*temp=root;
		for(int i=0;arr[i]!='\0';i++){
			char ch=arr[i];//'e'
		if(temp->h.count(ch)){
			// char present hai
			temp=temp->h[ch];

		}
		else{
			// char present nahi hai
			temp->h[ch]=new node(ch);
			temp=temp->h[ch];

		}


		}
		temp->isterminal=true;

		


	}

	bool search(char *arr){//cat
		node*temp=root;
		for(int i=0;arr[i]!='\0';i++){
			char ch=arr[i];//
		if(temp->h.count(ch)){
			// ch is present
			temp=temp->h[ch];
		}
		else{
			// ch is not present
			return false;
		}

		}
		return temp->isterminal;
		


	}



};


int main(){

	trie t;
	char arr[]="cat";
	t.insert(arr);
	t.insert("cate");
	t.insert("hello");
	t.insert("hell");
	t.insert("rat");

	if(t.search("hell")){
		cout<<"present"<<endl;

	}
	else{
		cout<<"not present"<<endl;

	}


	if(t.search("hel")){
		cout<<"present"<<endl;

	}
	else{
		cout<<"not present"<<endl;

	}







	





	return 0;
}