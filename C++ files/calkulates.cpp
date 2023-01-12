#include <iostream>
using namespace std;
int sel,x,y;
int main(){
	
	cout<<"ammallarni bajaring "<<endl;
	cout<<" qo'shish'"<<endl;	
	cout<<"ayir"<<endl;	
	cout<<"k'paytir"<<endl;	
	cout<<"bo'l"<<endl;	
	cout<<endl;
	cout<<"tanlovni kirit";
	cin>>sel;
	if(sel>0&&sel<5){
		cout<<"2ta son tanla";
		cin>>x>>y;
	}else{cout<<"tanlama";
	}	
	switch(sel){
		case 1:
			cout<<x+y;
				break;
		
		case 2:
			cout<<x-y;
				break;
		
		case 3:
			cout<<x*y;
				break;
		
		case 4:
			cout<<x/y;
				break;}
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}