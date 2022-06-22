#include<iostream>
using namespace std;


// forward decleartion
// return tyep nameofthefunction(argumets);
void fertocel(int fer,int final,int step);

int main(){
    // fertocel();
    	int fer,final,step;
	cin>>fer>>final>>step;

    
    fertocel(fer,final,step);
	
	// int fer=0;
	// int final=300;
	// int step=20;


	return 0;
}

void fertocel(int fer,int final,int step){
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
    
    
}