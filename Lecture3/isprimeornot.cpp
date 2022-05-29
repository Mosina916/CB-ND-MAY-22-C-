#include<iostream>
// #include<climits>
using namespace std;
int main(){
	int no;
	cin>>no;//6

	int i=2;

// loop
	while(i<no){
		if((no%i)==0){
			 // i is also a factor of no
			cout<<"Not prime"<<endl;
			return 0;

	}
	else{
		i=i+1;//5

	}

	}
	if(i==no){
		cout<<"prime"<<endl;
	}



	int largest=INT_MIN;
	int smallest=INT_MAX;
	


	return 0;
}