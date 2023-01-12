#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	srand(time(0));
	int sgues=1+(rand()%5);
	int gues;
	int bgues=0;
	int ogues=3;
	bool new1=false;
	while(gues!=sgues&&!new1){
		if(bgues<ogues){
			cout<<"enter your n";
			cin>>gues;
			bgues++;
		}else{
			new1=true;
		}
	}
	
	if(gues==sgues){
		cout<<"topding";
	}else{
		cout<<"topommading";
		cout<<sgues;
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}