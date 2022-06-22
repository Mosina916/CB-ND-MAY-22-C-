#include <iostream>
using namespace std;
int main() {
    int arr[]={0,2,1,1,0};
    int n=sizeof(arr)/sizeof(int);
    int j;
    cout<<"array before sorting "<<endl;
    for(int i=0;i<n;i++){


        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int curr=arr[i];
        for(j=i-1;j>=0;j--){
            if(curr<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }

        }
        arr[j+1]=curr;

    }
    cout<<"array After sorting "<<endl;
    for(int i=0;i<n;i++){


        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
