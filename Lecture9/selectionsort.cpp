#include <iostream>
using namespace std;
int main() {

    int arr[]={2,2,0,8,4,5,3,3,2,3,1,5,4};
    int n=sizeof(arr)/sizeof(int);
     cout<<"Before selection sort"<<endl;
   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int place=0;place<=n-2;place++){
        int min=place;
        for(int j=place+1;j<=n-1;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[place]);

    }
    cout<<"After selection sort"<<endl;
   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

    
}