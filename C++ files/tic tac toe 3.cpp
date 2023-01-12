#include <iostream>
using namespace std;
char square [10]={'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void displayBoard();

int main(){
	int player =7,i,choice;
	char mark;
	do{
	displayBoard();
	player =(player % 2) ? 1 : 2;//tanlab beradi nechinci ishtirokchiligini player ga neci qiymat
//	bersak player=7 bunda 7ni  buldi 2ga qoldiq 1 busa 1chi ishtrokchi qoldiq qomasa 2chi ishtrokchi
	cout<<endl;
	cout<<"player";
	cout<<player<<endl;//bu yerdagi player==raqamni belgilab beruvchi ozgaruvchi raqam 1 yoki 2ga tengligi 
	//ayt
	cout<<"enter your number: ";
	
	cin>>choice; //1 2 4 5 6 7 8 9 yozish uchun
	mark =(player ==1) ? 'x' :'0';//1 ga teng bulishi qaysi dir ishtrokchining x yoki 0 chiqqandan keyingi
	// toxtashi.  
	
	
	if(choice ==1 && square[1]=='1')
	square[1] =mark;
else if(choice ==2 && square[2]=='2')
	square[2] =mark;
else if(choice ==3 && square[3]=='3')
	square[3] =mark;
else if(choice ==4 && square[4]=='4')
	square[4] =mark;
else if(choice ==5 && square[5]=='5')
	square[5] =mark;
else if(choice ==6 && square[6]=='6')
	square[6] =mark;
else if(choice ==7 && square[7]=='7')
	square[7] =mark;
else if(choice ==8 && square[8]=='8')
	square[8] =mark;
else if(choice ==9 && square[9]=='9')
	square[9] =mark;
else{



	
	cout<<"invalid move  ";
	player--;
	i=checkwin();
	player++;
	
	
}while(i==-1);
displayBoard();
if(i==1)
	cout<<"==>\aPlayer "<<--player<<" win";
else 
cout<<"==>\aGame draw";

return 0;}

int  checkwin(){
if (square[1]==square[2] && square[2]==square[3])
	return 1;	
else if (square[4]==square[5] && square[5]==square[6])
	return 1;		
else if (square[7]==square[8] && square[8]==square[9])
	return 1;		
else if (square[1]==square[4] && square[4]==square[7])
	return 1;	
else if (square[2]==square[5] && square[5]==square[8])
	return 1;	
else if (square[3]==square[6] && square[6]==square[9])
	return 1;	
else if (square[1]==square[5] && square[5]==square[9])
	return 1;	
else if (square[3]==square[5] && square[5]==square[7])
	return 1;	
else if (square[1]!='1' && square[2]!='2' && square[3]!='3'&& square[4]!='4'&& square[5]!='5'&& square[5]!='5'&& square[6] && square[7]!='7' && square[8]!='8' && square[9]!='9')
return 0;
else
return -1;}
void displayBoard(){
		system("cls");
	cout<<"\n Player 1 (x)     -     Player 2 (0)" <<endl<<endl;
cout<<"\t _________________ " <<endl;
cout<<"\t|     |     |     |" <<endl;
cout<<"\t| "<< square[1] <<"   |  " <<square[2] << "  |  " <<  square[3] << "  |  " <<endl;
cout<<"\t|_____|_____|_____|" <<endl;
cout<<"\t|     |     |     |" <<endl;
cout<<"\t| "<< square[4] <<"   |  " <<square[5] << "  |  " <<  square[6] << "  |  "<<endl;
cout<<"\t|_____|_____|_____|" <<endl;
cout<<"\t|     |     |     |" <<endl;
cout<<"\t| "<< square[7] <<"   |  " <<square[8] << "  |  " <<  square[9] << "  |  " <<endl;
cout<<"\t|_____|_____|_____|" <<endl;
	
	
}