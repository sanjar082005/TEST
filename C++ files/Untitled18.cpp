#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	srand(time(0));
	int sguess=1+(rand()%333);
	int guess;
	int bguess=0;
	int oguess=3;	
     bool new1=false;//
	while(guess!=sguess&&!new1){
		if(bguess<oguess){
		cout<<"enter your n: ";
		cin>>guess;
		bguess++;}
		else{new1=true;//
		}
	}
	if(guess==sguess){
		cout<<"topding ";
	}else{
		cout<<"topommading ";
		cout<<sguess;
	}
	
	
	
	
	
	
	
	
	return 0;}