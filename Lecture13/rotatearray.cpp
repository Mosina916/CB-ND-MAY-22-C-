#include<iostream>
using namespace std;
int lengthofarr(char arr[]){
	int c=0;
	int i=0;
	while(arr[i]!='\0'){
		c++;
		i++;
	}
	return c;
}
void rotatearr(char arr[],int n){
	int l=lengthofarr(arr);//12
	for(int k=l;k>=0;k--){
		arr[k+n]=arr[k];


	}
	int s=0;
	int m=l;
	for(int cou=1;cou<=n;cou++){
		arr[s]=arr[m];
	s++;
	m++;


	}

	arr[l]='\0';
	
	cout<<arr<<endl;
	
}
int main(){
	char arr[]="codingBlocks";
	int n;
	cin>>n;


	int len=lengthofarr(arr);
	if(n>len){
		n=n%len;
	}
	rotatearr(arr,n);
	



	return 0;
}