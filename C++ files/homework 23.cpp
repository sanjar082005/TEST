#include <iostream>
using namespace std ;
int main(){
	float num1, num2;
	int chol;
	do{
	cout <<"menu"<<endl;
	cout <<"1. +\n";
	cout <<"2. -\n";
	cout <<"3. *\n";
	cout <<"4. /\n";
	cout <<"5 brat menyuda 4ta narsa bor"<<endl;
	
	  
	cin >> chol;
	if(chol>=1 && chol<=4){cout<<"enter  2 number"<<endl;
	}	
	cin>>num1>>num2;
		switch(chol){
		case 1:cout <<num1+num2;break;
		case 2:cout <<num1-num2;break;
		case 3:cout <<num1*num2;break;
		case 4:cout <<num1/num2;break;	
		default:cout<<"ammalarni bajaring";
	}
		sleep(3);
		system("cls");
	
}while(true);
return 0;}