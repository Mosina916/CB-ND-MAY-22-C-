#include<iostream>
using namespace std;

int main(){
	// relational operator

	// ==


	// if else
	int age;
	cin>>age;//40,20,80,67,
	// syntax
	// only works single time
	// if(condition){
	// 	// task
	// }
	if(age>30){
		cout<<"person is working"<<endl;
	}


	// if else
	// syntax


	// if(condition){

	// }
	// else{

	// // }
	if(age>30){
		cout<<"person is working"<<endl;
	}
	else{
		cout<<"person is not working"<<endl;

	}


	// // if elseif else 
	if(age==30){
		cout<<"person is working and age is 30"<<endl;
	}
	else if(age==60){
		cout<<"person is working and age is 60"<<endl;
	}
	else if(age>=60){
		cout<<"age is greater than 60"<<endl;
	}
	else if(age<=4){
		cout<<"person is child"<<endl;
	}
	else{
		cout<<"hello world"<<endl;

	}


	
	





	return 0;//end of program
}