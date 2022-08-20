#include<iostream>
using namespace std;
void permuation(char inpu[],int i){
	// base case
	if(inpu[i]=='\0'){
		cout<<inpu<<endl;
		return;
	}


	// recursive case
	for(int j=i;inpu[j]!='\0';j++){
		swap(inpu[i],inpu[j]);
		permuation(inpu,i+1);
		swap(inpu[i],inpu[j]);//backtracking

	}
	
}
int main(){
	char inpu[100];
	cin>>inpu;//"abc"
	permuation(inpu,0);




	return 0;
}