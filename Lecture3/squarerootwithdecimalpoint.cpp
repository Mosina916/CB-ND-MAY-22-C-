// #include<iostream>
// #include<climits>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int no;
	cin>>no;//8
	int times;
	cin>>times;//2
	float step=1;
	float i=0;
	int counter=1;
	while(counter<=times+1){
			// loop
	while(i*i<=no){
			i=i+step;//3

	}
	i=i-step;//2.82
	step=step/10;//0.01/10-->0.001
	counter=counter+1;

	}

	// if()

	cout<<"squre root is "<<fixed <<setprecision(3)<<i<<endl;


	





	return 0;
}