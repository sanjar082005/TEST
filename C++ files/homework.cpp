#include <iostream>
using namespace std;
int main(){
	
	int num1;
	cout<<"student olgan baho foizi "<<endl;
	cin>>num1;
    if (num1<=100&&num1>86){
        cout<<"5 baho";
	}else if (num1<=85&&num1>=74){
	    cout<<"4 baho";
	}else if (num1<=73&&num1>=60){
	    cout<<"3 baho";
	}else if (num1<60){
	    cout<<"yiqildi";
	}else {
	    cout<<"invalid value";
	}
	
	return 0;}