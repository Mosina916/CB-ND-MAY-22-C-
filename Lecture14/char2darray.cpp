#include<iostream>
using namespace std;
int main(){
	// char arr[4][3]={
	// 	{'D','O','G'},
	// 	{'C','A','T'},
	// 	{'R','A','T'},
	// 	{'M','A','T'}

	// };

	// char arr[4][4]={
	// 	{'D','O','G','\0'},
	// 	{'C','A','T','\0'},
	// 	{'R','A','T','\0'},
	// 	{'M','A','T','\0'}

	// };


	// char arr[][4]={
	// 	{'D','O','G','\0'},
	// 	{'C','A','T','\0'},
	// 	{'R','A','T','\0'},
	// 	{'M','A','T','\0'}

	// };


	// cout<<arr+0<<endl;
	// cout<<(void *)arr[0]<<endl;


	// cout<<arr+1<<endl;

	// cout<<(void *)arr[1]<<endl;

	// in general 2d char 
	// arr+i--> arr[i]


	// print 2d array
// 	for(int i=0;i<=3;i++){
// 	 for(int j=0;j<=2;j++){
// 		cout<<arr[i][j]<<" ";

// 	}
// 	cout<<endl;

// 	}
// // 

	// cout<<(void*)arr[0]<<endl;
	// cout<<(void*)arr[1]<<endl;
	// cout<<(void*)arr[2]<<endl;
	// cout<<(void*)arr[3]<<endl;


	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;

	// for(int i=0;i<=3;i++){
	// 	cout<<arr[i]<<endl;

	// }
	



	char arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//3 3
	int i,j;
	for (i = 0; i <=rows-1; ++i)
	{
		for(j=0;j<=cols-1;j++){
			cin>>arr[i][j];
		}
		arr[i][j]='\0';
	}

	for(int i=0;i<=rows-1;i++){
		cout<<arr[i]<<endl;

	}
	






	return 0;
}