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

void copybtoa(char a[100],char b[100]){
	int i=0;
	int j=0;
	// loop
	while(i<=lengthofarr(b))
	{
		a[j]=b[i];
		i++;
		j++;

	}
	
}
int main(){


	char a[100];
	char b[100];
	cin.getline(b,100);
	// cin>>b;
	copybtoa(a,b);

	cout<<a<<endl;
	cout<<b<<endl;


	


	return 0;
}