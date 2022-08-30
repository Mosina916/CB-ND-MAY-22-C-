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

int main(){
	node n1(3);
	node n2(5);
	// cout<<n1.data<<endl;
	// cout<<n2.data<<endl;
	n1.next=&n2;
	// n1 ki help se n1 aur n2 ka data print karu
	cout<<n1.data<<endl;
	// (*n1.next) n2
	// cout<<(*n1.next).data<<endl;

	cout<<n1.next->data<<endl;


	return 0;
}