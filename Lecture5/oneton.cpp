#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	// for(int i=1;i<=n;i++){
	// 	if(i==2 or i==4){
	// 		cout<<"hello"<<endl;
	// 		continue;
	// 		// cout<<"hello"<<endl;
	// 	}
	// 	cout<<i<<" ";

	// }

	for(int i=1;i<=n;i++){
		if(i==6){
			break;
		}
		cout<<i<<" ";

	}
	

	
	return 0;
}