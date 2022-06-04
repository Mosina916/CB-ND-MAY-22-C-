#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;//n will be always odd 5
	int count=1;
	int ans=0;


	int no;
	// loop
	while(count<=n){//5<=5
		cin>>no;//2 6 8 2 6
		ans=ans^no;//0^2-->2^6-->4^8-->12^2-->14^6-->8

		count++;//6

	}
	cout<<ans<<endl;


	// 2 4 5 4 7 1 5 2





	return 0;	
}


	