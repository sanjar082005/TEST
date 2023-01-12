#include <iostream>
using namespace std ;
int main(){ 
int option;
double balance=500;
double amount;
double money;


cout<<"****Menu****"<<endl;
cout<<"1. check balance"<<endl;
cout<<"2. Deposite"<<endl;
cout<<"3. withdraw"<<endl;
cout<<"4. exit"<<endl;
cin >> option;
	switch(option){
		case 1:
			cout<<balance<<"$"<<endl;
			break;
		case 2:
			cout<<"enter your amount: ";
			cin >>amount;

			balance+=amount;
			cout <<"hisobda "<<balance <<"$";
			break;
		case 3:
			cout<<"how much do you want ? ";
			cin>>money;
				if(money<500){cout<<"successfully"<<balance-money<<"$";}
				
			else{cout<<"your money is not enough";
			}
		case 4:
			cout<<"Thank you for using our service";
		
	}




















return 0;}