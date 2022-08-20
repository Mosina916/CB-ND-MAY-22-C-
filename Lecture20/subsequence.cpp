#include<iostream>
using namespace std;
void subsequence(char inpu[],int i,char out[],int j){
	// base case
	if(inpu[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}


	// recursive case
	// without a
	subsequence(inpu,i+1,out,j);


	// with a
	out[j]=inpu[i];
	subsequence(inpu,i+1,out,j+1);

}
int main(){
	char inpu[100];
	cin>>inpu;//"abc"
	char out[100];
	subsequence(inpu,0,out,0);




	return 0;
}