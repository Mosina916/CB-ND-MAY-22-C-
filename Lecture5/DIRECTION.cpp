#include<iostream>
using namespace std;
int main(){
	int x=0;
	int y=0;
	char ch;
	// NESNWES-->input buffer
	// cin>>ch;//N
	ch=cin.get();

	// loop
	while(ch!='\n'){
		if(ch=='N'){
		y++;
	}
	else if(ch=='S'){
		y--;
	}
	else if(ch=='E'){
		x++;
	}
	else{
		x--;
	}
	// cin>>ch;
	ch=cin.get();

	}

	// cout<<"x is "<<x<<endl;
	// cout<<"y is "<<y<<endl;
	if(x>=0&&y>=0){
		// i am in first quadrant
		for(int co=1;co<=x;co++){
			cout<<'E';
		}
		for(int co=1;co<=y;co++){
			cout<<'N';
		}


	}
	else if(x<0&&y>=0){
		// i am in 2nd quadrant
		for(int co=1;co<=y;co++){
			cout<<'N';
		}

		for(int co=1;co<=abs(x);co++){
			cout<<'W';
		}



	}
	else if(x<0&&y<0){
		// i am in 3rd quadrant
		for(int co=1;co<=abs(y);co++){
			cout<<'S';
		}
		for(int co=1;co<=abs(x);co++){
			cout<<'W';
		}

	}
	else{
		// // i am in 4th quadrant
		for(int co=1;co<=x;co++){
			cout<<'E';
		}
		for(int co=1;co<=abs(y);co++){
			cout<<'S';
		}
	}

	cout<<endl;
	


	
	return 0;
}