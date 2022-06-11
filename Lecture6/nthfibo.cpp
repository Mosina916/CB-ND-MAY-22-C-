#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//10
	// if(n==0||n==1){
	// 	cout<<n<<endl;
	// }
	if(n==0){
		cout<<0<<endl;
	}
	else if(n==1){

		cout<<1<<endl;
	
	}
	else{
		int a=0,b=1;
	int pos=2;
	int c;
	while(pos<=n){
		c=a+b;
	a=b;
	b=c;
	pos++;

	}
	cout<<c<<endl;
	


	}
	





	return 0;  
}


	