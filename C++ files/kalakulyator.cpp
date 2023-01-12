#include <iostream>
using namespace std ;
int main(){
 float num1, num2, result;	
 int choice;
 do{
 	
 cout <<"****MENU****\n";
 cout <<"1. + \n";
 cout <<"2. - \n";
 cout <<"3. * \n";
 cout <<"4. / \n";
 cout <<"5. Exit \n\n";
 
 
 cin >> choice;
 
 if(choice >= 1 && choice <=4){
 	cout << "enter  first number: ";
 	cin >>num1;
 	cout<<"enter second number: ";
 	cin>>num2;
 }
 
   switch(choice){
   	case 1: 
   	result =num1 + num2;
   	cout << result<<endl;
   	break;
   	case 2:
   	result =num1 - num2;
   	cout << result<<endl;
   	break;
   	case 3:
   	result =num1 * num2;
   	cout << result<<endl;
   	break;
   	case 4:
   	result =num1 / num2;
   	cout << result<<endl;
   	break;
   	   } 
 while(choice >= 1 && choice <=4);
 if(choice==1){cout<<"ishla";
 }
}
 
 
 
char signs;
 cout<<"birinchi sonni kirit ";
cin>>num1;
 cout<<"ikkinchi sonni kirit ";
 cin>>num2;
 cout<<"belgini kiriting ";
 cin>>signs;
 switch(signs){
 	case '+':
 		cout<<num1+num2;
 break;
 	case '-':
 		cout<<num1-num2;
break;
 	case '*':
	 	cout<<num1*num2;
 break;
    case '/':
        cout<<num1/num2;
 break;	 	
 
 system("cls");
 sleep(1);
 return 0 ; }
}