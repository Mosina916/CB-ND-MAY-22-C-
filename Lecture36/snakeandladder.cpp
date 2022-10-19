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

	// void addedge(T u,T v,bool birdirec=true){
	void addedge(T u,T v,bool birdirec=false){
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
	
	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;


	for(int u=0;u<36;u++){
		for(int dice=1;dice<=6;dice++){
			int v=u+dice+board[u+dice];
			g.addedge(u,v);
		}
	}

	cout<<g.sssp(0,36)<<endl;



	return 0;
}