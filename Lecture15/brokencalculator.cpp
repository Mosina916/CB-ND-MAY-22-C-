#include <iostream>
#include<algorithm>
using namespace std;
void multiply(int arr[1000],int &noofplacetoiterate,int notomultiply){
	int carry=0;

	for(int j=0;j<noofplacetoiterate;j++){
		int product=arr[j]*notomultiply+carry;//6*4-->247+120 367
	arr[j]=product%10;
	carry=product/10;//24/10-->2

	}

	while(carry>0){
		arr[noofplacetoiterate]=carry%10;//36
		carry=carry/10;//3
		noofplacetoiterate++;//3
		

	}
	


}
void factorial(int n){
	int arr[1000]={0};
	arr[0]=1;
	int noofplacetoiterate=1;
	for(int i=1;i<=n;i++){//5
	multiply(arr,noofplacetoiterate,i);
}
for(int k=noofplacetoiterate-1;k>=0;k--){
	cout<<arr[k];
}
cout<<endl;



}
int main(){

	int n;
	cin>>n;//6
	factorial(n);
	return 0;
}
