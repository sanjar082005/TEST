#include <iostream>
using namespace std;
char square[10]={'e','1','2','3','4','5','6','7','8','9',};
void displayBoard();


int main(){
void displayBoard();
	return 0;
	
}
void displayBoard(){

	cout<<"    tic tac toe    ";
	cout<<"player1(x)    -    player2(0)";
	cout<<"   |   |   ";
	cout<<" " <<square[1]<<"  |  " <<square[2]<<"  |  "<<square[3]<<endl;
	cout<<"___|___|___";
	cout<<"   |   |   ";
	cout<<" " <<square[4]<<"  |  " <<square[5]<<"  |  "<<square[6]<<endl;
	cout<<"___|___|___";
	cout<<"   |   |   ";
	cout<<" " <<square[7]<<"  |  " <<square[8]<<"  |  "<<square[9]<<endl;
	cout<<"   |   |   "<<endl;
}