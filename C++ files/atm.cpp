#include <iostream>
using namespace std;
int amount;
int op;
double balance=500;
double withdraw;
 void displayMenu(){
 	cout<<"~~Menu~~"<<endl;
    cout<<"balance check"<<endl;	
 	cout<<"withdraw"<<endl;
 	cout<<"deposite"<<endl;
 	cout<<"exit"<<endl;
 }
 int main(){
 	displayMenu();
 	cout<<"tanlovni kirit: ";
 	cin>>op;
 	switch(op){
 		case 1:
 			cout<<balance;
 				break;
 		case 2:
 			cout<<"qancha pul qo'shmoqchisan: ";
 			cin>>amount;
 			cout<<balance+amount;
 				break;
 		case 3:
 			cout<<"qancha pul omoqchisan a tvar :";
 			cin>>amount;
 			if(amount<balance){
 				cout<<balance-amount;
			 }else {cout<<"tvarmisan buncha pulig yu ki";
			 }
			 break;
		case 4:
			exit(0);	 
				break;
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
	 }
 
 
 
 
 
 
 
 
 
 
 return 0;
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 