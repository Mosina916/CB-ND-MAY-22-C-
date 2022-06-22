#include<iostream>
using namespace std;
int pqr=90;
int factofano(int no){
    int ans=1;
    
    for(int i=no;i>=1;i--){
        ans=i*ans;
        
    }
      cout<<pqr<<endl;
    return ans;
  
}
int ncr(int n,int r){
      cout<<pqr<<endl;
    int ans=factofano(n)/(factofano(r)*factofano(n-r));
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    // cout<<ans;
      cout<<pqr<<endl;
   cout<<"Ncr is "<< ncr(n,r)<<endl;
    // cout<<ans;
    // cout<<"fact of a no is : "<<factofano(n)<<endl;
	return 0;
}