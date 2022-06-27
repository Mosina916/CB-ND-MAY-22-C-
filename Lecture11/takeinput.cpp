#include<iostream>
using namespace std;

int main(){
	// char arr[100]={'\0'};
	char arr[100];

	// for (int i = 0; i <100; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	// cin>>arr;
	//"hello hi"

	char ch;
	ch=cin.get();//'h'
	int i;


	for(i=0;ch!='$';i++){
		// if(ch==' '){
		// 	continue;
			
		// }
		arr[i]=ch;
		ch=cin.get();

	}
	arr[i]='\0';


	// cout<<arr<<endl;


	// cin.getline(arr,sizeofarr);

	// char arr[100];
	// cin.getline(arr,100);
	// cout<<arr<<endl;


// cin.getline(arr,100);
// cout<<arr<<endl;

	



	// cout<<arr<<endl;


	


	return 0;
}