#include <iostream>
using namespace std;
int main(){
	int day;
	cout<<"bugun haftaning nechanchi kuni:  ";
	cin>>day;
	if(day==1){cout<<"demak monday";
	}
	if(day==2){cout<<"demak tuesday";
	}
	if(day==3){cout<<"demak wednesday";
	}	
	if(day==4){cout<<"demak thursday";
    }
	if(day==5){cout<<"demak friday";
	}
	if(day==6){cout<<"demak saturday";
	}
	if(day==7){cout<<"demak Sundey";
	}
	if(day<0 || day>7){cout<<"bunaqa kun yo'q";
	}
	return 0;}