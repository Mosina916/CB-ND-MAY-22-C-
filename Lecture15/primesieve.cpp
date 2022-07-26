#include<iostream>
// #include<climits>
using namespace std;
int main(){
	int N;
	cin>>N;//7
	for(int n=2;n<=N;n++){

	int i=2;

// loop
	while(i<n){
		if((n%i)==0){
			 // i is also a factor of no
			// cout<<"Not prime"<<endl;
			break;

	}
	else{
		i=i+1;//5

	}

	}
	if(i==n){
		// cout<<"prime"<<endl;

		cout<<n<<endl;
	}


	}
	



	return 0;
}