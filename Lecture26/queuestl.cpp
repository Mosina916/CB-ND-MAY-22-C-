#include<iostream>
#include<queue>
using namespace std;


int main(){
	// Queue q(5);

	queue<int>q;
	q.push(3);
	q.push(13);
	// q.push(33);
	// q.push(32);
	// q.push(53);
	// q.push(783);
	// q.push(73);
	q.pop();
	q.pop();
	q.pop();
	// q.pop();
	q.push(0);
	q.push(10);
	q.push(110);
	q.push(50);



	// print
	while(!q.empty()){
		cout<<q.front()<<" ";
	q.pop();


	}
	// q.len;return arr[f];

	cout<<endl;
	




	return 0;
}