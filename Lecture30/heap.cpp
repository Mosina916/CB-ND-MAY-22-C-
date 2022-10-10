#include<iostream>
#include<vector>
using namespace std;
class Minheap{
	public:
	vector<int>v;
	Minheap(){
		v.push_back(-1);
	}


	// insertion
	void insert(int data){
		v.push_back(data);
		int child=v.size()-1;//2
		// loop
		while(child>1){
			int parent=child/2;//1
		if(v[child]<v[parent]){
			swap(v[child],v[parent]);
			
			
		}
		child=parent;//5

		}

	}
	void heapify(int index){
		int lc=2*index;
		int rc=2*index+1;
		int minindex=index;

		if(lc<v.size() and v[lc]<v[minindex]){
			// swap(v[lc],v[minindex]);
			minindex=lc;

		}

		if(rc<v.size() and v[rc]<v[minindex]){
			minindex=rc;
		}


		if(minindex!=index){ //base caSE

			swap(v[minindex],v[index]);
		heapify(minindex);

		}
		



	}

	// deletion

	void deletion(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);


	}

	// search

	int search(){
		return v[1];

	}

	// empty
	bool empty(){
		return v.size()==1;
	}

	// size
	int size(){
		return v.size()-1;

	}


};

int main(){
	Minheap h;

	// cout<<"mosina"<<endl;

	h.insert(36);
	// while(h.size()){
	// 	cout<<h.search()<<" ";
	// 	h.deletion();

	// }

	h.insert(19);
	h.insert(7);
	h.insert(3);
	h.insert(25);
	h.insert(100);
	h.insert(17);
	h.insert(2);
	h.insert(1);

	while(h.size()){
		cout<<h.search()<<" ";
		h.deletion();

	}

	cout<<endl;
	



	return 0;
}