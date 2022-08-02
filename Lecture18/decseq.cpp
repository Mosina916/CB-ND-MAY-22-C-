#include<iostream>
using namespace std;
void decorder(int n){//0
	// base case
	if(n==0){
		return;
	}
	// recursive case
	cout<<n<<" ";
	decorder(n-1);
}

void decorder2(int n,int i){
	// base case
	if(i==0){
		return;
	}



	// recursiove case
	cout<<i<<" ";//4
	decorder2(n,i-1);

}

void incorder(int n){//0
	// base case
	if(n==0){
		return;
	}
	// recursive case
	incorder(n-1);//1 2 3
	cout<<n<<endl;

}
// 1 2 3 4
void incorder2(int n,int i){
	// base case
	if(i==n+1){
		return;
	}



	// recursive case
	cout<<i<<" ";//1
	incorder2(n,i+1);




}
int main(){
	int n;
	cin>>n;//4
	// e/o 4 3 2 1

	// for(int i=1;i<=n;i++){
	// 	cout<<i<<" ";
	// }
	// incorder(n);

	// incorder2(n,1);

	// decorder2(n,n);


	// decorder(n);



	return 0;
}