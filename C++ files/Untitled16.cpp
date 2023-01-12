#include <iostream>
using namespace std;
int main(){
	string usern,pname;
	int atemp=0;
	
	
	while(atemp<3){
		cout<<"enter your username: ";
		cin>>usern;
		cout<<"enter your password: ";
		cin>>pname;
	if(usern=="sanjar"&&pname=="2222"){
		cout<<"welcome"<<usern;
		
		break;
	}else {
		cout<<"yana urin.  "<<endl;
		atemp++;
	}	
		
	}
	
	
	if(atemp==3){
		cout<<"pizdes";
	}else{
		cout<<"thank you bitch";
	}
	
	
	
	
	

	
	return 0;}