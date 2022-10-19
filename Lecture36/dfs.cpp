#include<iostream>
#include<list>
#include <queue>
#include<unordered_map>
// #include<map>
using namespace std;
template<typename T>
class Graph{
	

	unordered_map<T,list<T> > h;
	// map<string,list<string> > h;
public:
	void addedge(T u,T v,bool birdirec=true){
		h[u].push_back(v);
		if(birdirec){
			h[v].push_back(u);
		}


	}

	void printlist(){

		for(auto z:h){
			cout<<z.first<<"--> ";
			for(auto nei:z.second){
				cout<<nei<<" ";
			}

			cout<<endl;

		}

	}

	// void dfs(T start,unordered_map<T,bool> &visited){
	// 	cout<<start<<" ";
	// 	visited[start]=true;
	// 	for(auto c:h[start]){
	// 		if(!visited[c]){
	// 			dfs(c,visited);
	// 		}
	// 	}
	// }

	// void dfs(T start,unordered_map<T,bool> &visited){
	// 	// cout<<start<<" ";
	// 	visited[start]=true;
	// 	for(auto c:h[start]){
	// 		if(!visited[c]){
	// 			dfs(c,visited);
	// 		}
	// 	}
	// }


void dfs(T start,unordered_map<T,bool> &visited){
		// cout<<start<<" ";
		visited[start]=true;
		for(auto c:h[start]){
			if(!visited[c]){
				dfs(c,visited);
			}
		}
	}
void totalnoofcomponents(T st){
		int comp=1;
		unordered_map<int,bool> visited;
		dfs(st,visited);

		for(auto x:h){
			if(!visited[x.first]){
				comp++;
				dfs(x.first,visited);

			}
		}
		cout<<endl;
		cout<<endl;
		cout<<"count of component is "<<comp<<endl;

	}


	
	
	};
int main(){
	
	Graph<int>g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,3);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,2);
	g.addedge(2,3);
	// g.printlist();


	g.addedge(11,12);
	g.addedge(12,13);
	g.addedge(13,11);

	g.addedge(100,101);
	g.addedge(200,101);
	
	cout<<endl;

	// g.printlist();

	// unordered_map<int,bool> visited;

	// g.dfs(0,visited);

	cout<<endl;

	g.totalnoofcomponents(0);




	return 0;
}