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
void appendbtoa(char*a,char*b){
	int i=0;
	int j=lengthofarr(a);

//
	// while(i<=lengthofarr(b)){
	// 	a[j]=b[i];
	// 	i++;
	// 	j++;

	// }


	while(b[i]!='\0'){
		a[j]=b[i];
		i++;
		j++;

	}
	a[j]='\0';


	


}
int main(){


	// char arr[100];
	// cin.getline(arr,100);

	char a[100]="hello";
	char b[100]="coding";
	cout<<"a before append "<<a<<endl;
	cout<<"b before append "<<b<<endl;


	appendbtoa(a,b);

	cout<<"a after append "<<a<<endl;
	cout<<"b after append "<<b<<endl;

 


	


	return 0;
}