#include<iostream>
// #include<climits>
using namespace std;
int main(){
	
	// int fer=0;
	// int final=300;
	// int step=20;
	int fer,final,step;
	cin>>fer>>final>>step;


// loop
	while(fer<=final){
		// int c=5/9*(fer-32);
		// int c=(fer-32)*5/9;
		// int c=5*1.0/9*(fer-32);

		// int c=5/9.0*(fer-32);
		int c=5.0/9.0*(fer-32);
		// float c=5.0/9.0*(fer-32);
	cout<<fer<<'\t'<<c<<endl;
	fer=fer+step;//300

	}


	




	return 0;
}