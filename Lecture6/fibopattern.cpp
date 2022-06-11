#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//4

	if(n==1){
		cout<<0<<endl;
	}
	else{
		// ist 2 rows
		cout<<0<<endl;
		cout<<1<<'\t'<<1<<endl;
		int rowno=3;
		int a=1;
		int b=1;
		int c=a+b;//2
		while(rowno<=n){
			int cnt=1;
		while(cnt<=rowno){
			// cout<<'*'<<'\t';
			cout<<c<<'\t';
			a=b;
			b=c;
			c=a+b;
			cnt++;
		}
		cout<<endl;
		rowno++;//4

		}
		





	}
	



	return 0;  
}


	