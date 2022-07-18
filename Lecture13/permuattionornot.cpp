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
bool ispermuattionornot(char a[100],char b[100]){
	int l1=lengthofarr(a);
	int l2=lengthofarr(b);
	if(l1!=l2){
		return false;
	}
	else{
		int arr1[26]={0};
		for(int i=0;i<=l1-1;i++){
			char ch=a[i];//a
			int index=ch-'a';//c-a-->2
			arr1[index]++;

		}
		int arr2[26]={0};
		for(int i=0;i<=l2-1;i++){
			char ch=b[i];//a
			int index=ch-'a';//c-a-->2
			arr2[index]++;	

	}

	for(int k=0;k<=25;k++){
		if(arr1[k]!=arr2[k]){
			return false;
		}
	}

	return true;

}
}

int main(){
	char a[100];
	char b[100];
	cin.getline(a,100);
	cin.getline(b,100);

	if(ispermuattionornot(a,b)){
		cout<<"yes permutation"<<endl;

	}
	else{
		cout<<"Not permutation"<<endl;

	}


	return 0;
}