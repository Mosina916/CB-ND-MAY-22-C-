#include<iostream>
using namespace std;
class node{
public:
	string fruitname;
	int price;
	node*next;
	node(string f,int p){
		fruitname=f;
		price=p;
		next=NULL;
	}
};
class Hashmap{
	node**arr;
	int cs;
	int ts;
public:
	Hashmap(int size=7){
		arr=new node*[size];
		cs=0;
		ts=size;
		for(int i=0;i<size;i++){
			arr[i]=NULL;
		}
	}
	int hashfunction(string s){
		int mult=1;
		int ans=0;
		for(int i=0;s[i]!='\0';i++){

			ans=(ans%ts+(s[i]%ts*mult%ts)%ts)%ts;
			mult=(mult*29)%ts;


		}
		return ans;


	}

	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;//7
		ts=2*ts;//14
		cs=0;
		arr=new node*[ts];//14
		for(int i=0;i<ts;i++){
			arr[i]=NULL;

		}
		for(int i=0;i<oldts;i++){
			node*head=oldarr[i];
			while(head!=NULL){
				insert(head->fruitname,head->price);
				head=head->next;

			}
			

		}

		delete []oldarr;



	}
	

	// insert
	void insert(string s,int p){
		int index=hashfunction(s);
		node*n=new node(s,p);
		n->next=arr[index];
		arr[index]=n;
	
		if(cs/(ts*1.0)>0.6){
			rehashing();
		}	cs++;


	}


	// search
	bool search(string s){
		int index=hashfunction(s);
		node*head=arr[index];

		while(head!=NULL){
			if(head->fruitname==s){
			return true;

		}
		head=head->next;

		}
		return false;
		

	}

	// print
	void print(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";
			node*head=arr[i];
			while(head!=NULL){
				cout<<"("<<head->fruitname<<","<<head->price<<") ";
				head=head->next;
			}
			cout<<endl;

		}
	}
};
int main(){
	Hashmap h;
	h.insert("abc",100);
	h.insert("bac",400);
	h.insert("abgc",180);
	h.insert("abjc",170);
	h.insert("aabc",300);
	h.insert("apbc",300);

	h.print();






	return 0;
}