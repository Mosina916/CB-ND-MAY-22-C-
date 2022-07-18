#include <iostream>
using namespace std;
int lengthofarr(char *arr){
	int i=0;
	int countofchar=0;

// loop
	while(arr[i]!='\0'){
		countofchar++;//5
	i++;//4


	}
	return countofchar;
	

}
int main(){


	char arr[100];
	cin.getline(arr,100);
	// char arr[]="Hello";
	cout<<"length of arr is "<<lengthofarr(arr)<<endl;





	return 0;
}