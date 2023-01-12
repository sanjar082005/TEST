#include <iostream>
using namespace std;
int main(){
   string uname,upass;
   int attemp=0;
   while(attemp<3){
   	cout<<"enter your username ";
   	cin>>uname;
   	cout<<"enter your password ";
   	cin>>upass;
   	
   	
   	
   	if(uname=="sanjar"&&upass=="1234"){
   		cout<<"welcome "<<uname;
   		break;   		
	   }else{
	   	cout<<"topommading urinib kor"<<endl;
	   	attemp++;}
	   	
	   }
	
	
 if(attemp==3){
	cout<<"pizdes endi ";}
	else{cout<<"rahmat";
	}
	return 0;
	
	
	
	                    
	     
	
	

	
	
	

}
  
