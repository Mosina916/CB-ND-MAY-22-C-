#include<iostream>
#include<cstring>
using namespace std;

int main(){
	// string -->character array terminated by Null

// primitive datatype
	// int bool char float double

	// user defined datatpe


	// string s="i am a teacher";
	// cout<<s<<endl;


	// string s=("i am a teacher");
	// cout<<s<<endl;


	// string s;
	// // cin>>s;
	// getline(cin,s);
	// cout<<s<<endl;


	// // you can compare two strings
	// char arr[]={'R','a','\0'};
	// char arr1[]={'R','a','\0'};
	// if(arr==arr1)


	// string s1="dogt";
	// string s2="dogttyr";

	// // if(s1==s2){
	// if(s1>s2){
	// 	cout<<"same"<<endl;
	// }
	// else{
	// 	cout<<"different"<<endl;

	// }

	// concatenation /append -->+

	// string s1="dog";
	// string s2="cat";
	// string s=s2+s1;
	// cout<<s1+s1<<endl;

	// // cout<<s1+s2<<endl;
	// // cout<<s2+s1<<endl;


	// cout<<s<<endl;



	string s5="elephan";
	// stringname.push_back(char)
	// s5.push_back("nsgdfn");//this is wrong
	s5.push_back('t');

	// stringname.substr(index);
	// cout<<s5.substr(2)<<endl;
	// stringname.substr(index,count ofchar);
	// cout<<s5.substr(2,3)<<endl;

	// string s7=s5.substr(2,3);
	cout<<s5<<endl;

	s5.pop_back();
	s5.pop_back();
	cout<<s5<<endl;


	string s1="elephantt";
	int index;
	cin>>index;//3

	string p1=s1.substr(0,index);//ele
	string p2=s1.substr(index+1);//hantt
	string final=p1+p2;

	cout<<final<<endl;

















	

	

	return 0;
}