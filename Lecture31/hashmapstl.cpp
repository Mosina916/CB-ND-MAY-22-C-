#include<iostream>
// #include<unordered_map>
#include<map>
using namespace std;
int main(){
	// unordered_map<string,int> m;
	map<string,int> m;
	m["abc"]=100;
	m["bac"]=400;
	m["abgc"]=180;

	for(auto x:m){
		cout<<x.first<<" "<<x.second<<endl;
	}
	


	return 0;
}