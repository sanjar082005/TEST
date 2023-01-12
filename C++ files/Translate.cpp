#include <iostream> 
using namespace std;
int main(){
	
 int tanlov;
 string blue,kok ;
 string red ,qizil ;
 string yellow , sariq;
 string orange, toqsariq;
 string green, yashil;
 string purple, siyohrang;
 string pink, pushti;
 string black, qora;
 string white, oq;
 string words;

 

   cout<<"***<Translate of colours>***"<<endl;
   cout<<"   1. Eng-Uzb"<<endl;
   cout<<"   2. Uzb-Eng"<<endl;}

		 selection();
		 cout<<"tanlovni kirit: ";
		cin>>tanlov;
	switch(tanlov){
		case 1:
			
			 cout<<"tarjima qilmoqchi bo'lgan rangni kirit:   ";
			cin>>words;
			if(words==white){
			cout<<"oqrang";
			}else if(words==blue){
				cout<<"kok";
			}else if(words==red){
				cout<<"qizil";
			}else if(words==yellow){
				cout<<"sariq";
			}else if(words==orange){
				cout<<"toqsariq";
			}else if(words==green){
				cout<<"yashil";
			}else if(words==purple){
				cout<<"siyohrang";
			}else if(words==pink){
				cout<<"pushti";
			}else if(words==black){
				cout<<"qora";
        
			}
			
	}
			
	
	
		
	
return 0;

}



