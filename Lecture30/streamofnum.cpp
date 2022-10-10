#include<iostream>
#include<vector>
#include<queue>
#define minheap priority_queue<int,vector<int>, greater<int> >
using namespace std;
void printheap(minheap h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();

	}

	cout<<endl;
}
int main(){

	minheap h;
	int k;
	cin>>k;//3
	int co=1;
	while(80){
		int data;
	cin>>data;//-1
	if(data==-1){
		
		printheap(h);
	}
	else{
		if(co<=k){
			h.push(data);
			co++;
		}
		else{
			if(data>h.top()){
				h.pop();
				h.push(data);
			}
		}

	}


	}

	
	
	return 0;
}