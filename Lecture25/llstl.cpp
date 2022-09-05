#include<iostream>
#include<list>
using namespace std;
// class list{


	// push_back(){

// }

	// pop_back(){
		
	// }

// }
int main(){
	list<int> l;
	l.push_back(3);//insert at tail
	l.push_back(6);
	l.push_back(4);
	l.push_front(90);
	l.push_back(49);
	l.push_front(0);
	l.push_back(42);
	l.push_front(920);

	l.pop_front();
	l.pop_back();

	list<int>:: iterator it;

	for(it=l.begin();it!=l.end();it++){
		cout<<*it<<" ";

	}
	cout<<endl;

	l.reverse();

	// l.sort();

	cout<<l.front()<<endl;
	cout<<l.back()<<endl;

	// list<int>:: iterator it;

	for(it=l.begin();it!=l.end();it++){
		cout<<*it<<" ";

	}
	cout<<endl;
	// it=l.begin();
	advance(it,5);
	// l.insert(6,789);

	l.insert(it,789);//l.push_front();
	// l.insert(l.begin()+1,789);

	for(it=l.begin();it!=l.end();it++){
		cout<<*it<<" ";

	}
	


	
	return 0;
}