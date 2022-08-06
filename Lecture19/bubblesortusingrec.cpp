#include<iostream>
using namespace std;


// void bubblesortrec(int *arr,int n,int i){
// 	// base case
// 	if(i==n-1){
// 		return;
// 	}
	

// 	// recursive case
// 	for(int j=0;j<=n-2-i;j++){ //optimised
// 			if(arr[j]>arr[j+1]){
// 				// swap

// 				swap(arr[j],arr[j+1]);

// 			}

// 		}
// 		// \ 1 2 3 4 5
// 		bubblesortrec(arr,n,i+1);//4
	
// }

void bubblesortpurerec(int *arr,int n,int i,int j){

	if(i==n-1){
		return;
	}

	if(j==n-1-i){
		bubblesortpurerec(arr,n,i+1,0);//4
		
	}
	else{
		if(arr[j]>arr[j+1]){
				// swap

				swap(arr[j],arr[j+1]);

			}
			bubblesortpurerec(arr,n,i,j+1);

	}

	
	

	// recursive case
	// for(int j=0;j<=n-2-i;j++){ //optimised
	// 		if(arr[j]>arr[j+1]){
	// 			// swap

	// 			swap(arr[j],arr[j+1]);

	// 		}

	// 	}
		// \ 1 2 3 4 5
		

}



int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);

	// bubblesortrec(arr,n,0);

	bubblesortpurerec(arr,n,0,0);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	

	return 0;
}