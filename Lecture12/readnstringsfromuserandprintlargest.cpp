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

void copy(char a[100],char b[100]){
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

	int n;
	cin>>n;//3
	cin.ignore();//'\n'

	char a[1000];
	cin.getline(a,1000);//"coding"
	char largest[1000];
	copy(largest,a);
	int mlen=lengthofarr(a);

	int count=1;




	char b[1000];
	// loop
	while(count<=n-1){
		cin.getline(b,1000);//"mark"
	if(lengthofarr(b)>lengthofarr(largest)){
		copy(largest,b);
		mlen=lengthofarr(b);

	}
	count++;//3

	}

	cout<<"largest of n strings is : "<<largest<<endl;
	cout<<"max len of tring is : "<<mlen<<endl;


	




	


	


	return 0;
}