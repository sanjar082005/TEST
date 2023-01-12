#include <iostream>
using namespace std;
int main(){
	string day;
	float gradus;
	cout <<"Bugun haftaning qanday kuni?-";
	cin >> day;
	cout <<"Ob-havo qanaqa? Ya'ni necha gradus?-";
	cin >> gradus;
	if(day=="yakshanba" && gradus>=30 ){cout<<"Yaxshi, aylanishga boraman";
	}else{cout<<"Bora olmas ekanman, uzr.";
	}
	return 0;}