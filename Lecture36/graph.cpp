#include<iostream>
#include<list>
#include <queue>
#include<unordered_map>
// #include<map>
using namespace std;
template<typename T>
class Graph{
	// unordered_map<string,list<string> > h;

	unordered_map<T,list<T> > h;
	// map<string,list<string> > h;
public:
	// void addEdge(string u,string v,bool birdirec=false){
	// void addEdge(T u,T v,bool birdirec=false){

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
	void bfs(T start){
		queue<T> q;
		q.push(start);
		unordered_map<T,bool> visited;
		visited[start]=true;

		while(!q.empty()){
			T node=q.front();//2
		q.pop();
		cout<<node<<" ";

		for(auto neigh:h[node]){
			if(!visited[neigh]){
				q.push(neigh);
				visited[neigh]=true;
			}
		}

		}

	}


	// void bfsmod(T start){
	// 	queue<T> q;
	// 	q.push(start);
	// 	unordered_map<T,bool> visited;
	// 	visited[start]=true;
	// 	unordered_map<T,int> distance;
	// 	distance[start]=0;

	// 	while(!q.empty()){
	// 		T node=q.front();//2
	// 	q.pop();
	// 	cout<<node<<" ";

	// 	for(auto neigh:h[node]){
	// 		if(!visited[neigh]){
	// 			q.push(neigh);
	// 			visited[neigh]=true;
	// 			distance[neigh]=distance[node]+1;
	// 		}
	// 	}

	// 	}

	// 	for(auto p:distance){

	// 		cout<<"distance from "<<start<<" to "<<p.first<<" is "<<p.second<<endl;

	// 	}

	// }


	int sssp(T start,T dest){
		queue<T> q;
		q.push(start);
		unordered_map<T,bool> visited;
		visited[start]=true;
		unordered_map<T,int> distance;
		distance[start]=0;
		unordered_map<T,T> parent;
		parent[start]=start;

		while(!q.empty()){
			T node=q.front();//2
		q.pop();
		cout<<node<<" ";

		for(auto neigh:h[node]){
			if(!visited[neigh]){
				q.push(neigh);
				visited[neigh]=true;
				distance[neigh]=distance[node]+1;
				parent[neigh]=node;
			}
		}
		}

		for(auto p:parent){

			cout<<p.first<<" "<<p.second<<endl;

		}
		// for(auto p:distance){

		// 	cout<<"distance from "<<start<<" to "<<p.first<<" is "<<p.second<<endl;

		// }
		// cout<<endl;
		// cout<<endl;

		T temp=dest;

		while(temp!=parent[temp]){
			cout<<temp<<"<--";
		temp=parent[temp];


		}


		cout<<temp<<endl;
		


		return distance[dest];

	}


	
	
	};
int main(){
	
	// Graph g;
	// Graph<string>g;
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Putin", "Pope");
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");
	// g.addEdge("pope", "");

	// Graph<int>g;
	// g.addedge(0,1);
	// g.addedge(0,4);
	// g.addedge(1,3);
	// g.addedge(1,4);
	// g.addedge(4,3);
	// g.addedge(1,2);
	// g.addedge(2,3);
	// // g.printlist();
	// cout<<endl;

	// // g.bfs(4);
	// // g.bfsmod();
	// cout<<g.sssp(2,1)<<endl;



	return 0;
}