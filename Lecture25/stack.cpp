#include<iostream>
#include<vector>
using namespace std;
class stack{
	vector<int> v;
public:
	


	// push
	void push_back(int d){
		v.push_back(d);
	}

	// pop
	void pop(){
		v.pop_back();

	}

	// top
	int top(){
		return v[v.size()-1];
	}

	// empty
	bool empty(){
		// if(v.size()==0){
		// 	return true;
		// }
		// return false;
		return v.size()==0;
	}

	// size
	int size(){
		return v.size();
	}
};
int main()
{
	stack s;
	s.push(2);
	s.push(3);
	s.push(6);
	s.push(0);
	s.push(13);
	s.push(30);
	s.pop();

	// cout<<s.v[2]<<endl;
	while(!s.empty()){
		cout<<s.top()<<" ";//13
	s.pop();
	}

	cout<<endl;
	


	
	return 0;
}