#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	// priority_queue<int> h;//by default max heap


	priority_queue<int,vector<int>, greater<int> > h;//min heap




	h.push(36);
	// while(h.size()){
	// 	cout<<h.search()<<" ";
	// 	h.deletion();

	// }

	h.push(19);
	h.push(7);
	h.push(3);
	h.push(25);
	h.push(100);
	h.push(17);
	h.push(2);
	h.push(1);

	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();

	}

	cout<<endl;
	



	return 0;
}