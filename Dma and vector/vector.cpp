#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	// if(v.empty()){
	// 	cout<<"empty"<<endl;

	// }
	// else{
	// 	cout<<"Not empty"<<endl;

	// }
	// v.push_back(5);
	// if(v.empty()){
	// 	cout<<"empty"<<endl;

	// }
	// else{
	// 	cout<<"Not empty"<<endl;

	// }
	v.push_back(15);
	v.push_back(17);
	v.push_back(30);
	v.push_back(20);
	v.push_back(13);

	// v.erase(v.begin());

	v.erase(v.begin()+2);


	cout<<v.size()<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	v.insert(v.begin(),6);
	// cout<<v.capacity()<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	v.insert(v.begin()+2,60);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	// v.pop_back();

	// v.empty();
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;

	// cout<<v.at(2)<<endl;

	// cout<<v.front()<<endl;
	// z





	

	return 0;
}