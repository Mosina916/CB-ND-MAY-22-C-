#include<iostream>
using namespace std;
int main(){
	int arr[]={4,6,1,1,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	// pehla kaam 
	// for(int i=1;i<=n-1;i++){
	// 	for(int j=0;j<=n-i-1;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

	// }

// bruteforce approach

	// for(int i=0;i<=n-2;i++){
	// 	for(int j=0;j<=n-i-2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}

	// }

	// }

// optimised 
	for(int i=0;i<=n-2;i++){
		bool kyaswaphuvaabhitak=false;

		for(int j=0;j<=n-i-2;j++){
		if(arr[j]>arr[j+1]){
			// swap(arr[j],arr[j+1]);
			kyaswaphuvaabhitak=true;
		}
	}
	if(kyaswaphuvaabhitak==false){
		break;
	}

	}


	for(int i=0;i<=n-2;i++){
		bool kyaswaphuvaabhitak=false;
		
		for(int j=0;j<=n-i-2;j++){
		if(arr[j]>arr[j+1]){
			// swap(arr[j],arr[j+1]);

			// using 3rd variable
			// int c=arr[j];
			// arr[j]=arr[j+1];
			// arr[j+1]=c;


			// swap without using 3rd varible 
			// arr[j]=arr[j]+arr[j+1];
			// arr[j+1]=arr[j]-arr[j+1];
			// arr[j]=arr[j]-arr[j+1];


			// swap in a single line
			// b=a+b-(a=b);
			arr[j+1]=arr[j]+arr[j+1]-(arr[j]=arr[j+1]);

			kyaswaphuvaabhitak=true;
		}
	}
	if(kyaswaphuvaabhitak==false){
		break;
	}

	}



	


// 	// dusra kaam 
// 	i=2;
// 	for(int j=0;j<=n-i-1;j++){
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}

// // 3rd time
// 	i=3
// 	for(int j=0;j<=n-i-1;j++){
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}

// 	// 4th time
// 	i=4
// 	for(int j=0;j<=n-i-1;j++){
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}



	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}