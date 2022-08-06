#include<iostream>
using namespace std;

void Toh(int n,char src,char helper,char dest){
	// base case
	if(n==0){
		return;
	}


	// recursive case
	Toh(n-1,src,dest,helper);
	cout<<"Move disk no "<<n<<" from "<<src<<" to "<<dest<<endl;
	Toh(n-1,helper,src,dest);
}
int main(){

	int n;
	cin>>n;
	Toh(n,'A','B','C');

	
	return 0;
}