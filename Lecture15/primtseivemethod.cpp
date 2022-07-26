#include<iostream>
using namespace std;
void primeseive(int p[10000]){
	p[2]=1;
	for(int i=3;i<10000;i=i+2){
		p[i]=1;

	}
	for(int i=3;i<10000;i=i+2){
		if(p[i]==1){
		// 	for(int j=i*2;j<10000;j+i){
		// 	arr[j]=0;

		// }

			for(int j=i*i;j<10000;j=j+i){
			p[j]=0;

		}

		}
		
		
			
		

	}


}
int main(){
	int N;
	cin>>N;//8

	int p[10000]={0};
	primeseive(p);

	for(int i=0;i<=N;i++){
		if(p[i]==1){
			cout<<i<<" ";
		}
	}

	cout<<endl;


	return 0;
}