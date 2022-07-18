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
bool ispalindrome(char arr[100]){
	int i=0;
	int j=lengthofarr(arr)-1;

// loop
	while(j>i){
		if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}

	}
	return true;
	

}
int main(){
	char arr[100];
	// cin>>arr;

	// int arr1[100];
	// cin>>arr1;
	cin.getline(arr,100);


	// char arr[]="nitin";
	if(ispalindrome(arr)){
		cout<<"yes palindromic"<<endl;
	}
	else{
		cout<<"Not palindromic"<<endl;

	}

	// cout<<"yes palindromic"<<endl;





	return 0;
}