#include <iostream>
using namespace std;
int main(){
	string uname,pname;
	int atemp;
	
	while(atemp<3){
		cout<<"enter your uname: ";
		cin>>uname;
		cout<<"enter your pname: ";
		cin>>pname;
		
	if(uname=="sabjar"&&pname=="234"){
		cout<<"welcome"<<uname;
		break;
	}else{
		cout<<"yana urin     ";
		atemp++;
	}	
    	}
	if(atemp==3){
		cout<<"pizdes";
	}else{
		cout<<"thanks";
	}
	
	
	return 0;
}
