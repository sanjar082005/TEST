#include <iostream>
using namespace std;
int main(){
	int day;
	cout<<"Bugun haftaning nechanchi kuni -";
	cin>>day;
	if(day=1){cout<<"demak dushanba"
	;}
	if(day=2){cout<<"demak seshanba"
	;}
	if(day=3){cout<<"demak chorshanba"
	;}
	if(day=4){cout<<"demak payshanba"
	;}
	if(day=5){cout<<"demak juma"
	;}
	if(day=6){cout<<"demak shanba"
	;}
	if(day=7){cout<<"demak yakshanba"
	;}
    if(day>7 || day<0){cout<<"Bunaqa kun yo'qku"
	;}
	
return 0;}
