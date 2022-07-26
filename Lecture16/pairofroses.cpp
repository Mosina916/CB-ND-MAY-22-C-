#include<iostream>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){
		int tr;
		cin>>tr;//5
		int roses[100000];
		for (int i = 0; i <tr; ++i)
		{
			cin>>roses[i];//
		}

// 10 2 6 8 4
		int money;
		cin>>money;//10
		sort(roses,roses+tr);//2 4 6 8 10
		int k=0;
		int l=tr-1;
		int p1,p2;
// loop
		while(k<l){

		if(roses[k]+roses[l]>money){
			l--;
		}
		else if(roses[k]+roses[l]==money){
			p1=roses[k];
			p2=roses[l];
			k++;
			l--;

		}
		else{
			k++;
		}

		}

		cout<<p1<<" "<<p2<<endl;



	}

	return 0;
}