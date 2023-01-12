#include <iostream>
using namespace std;
int x,c,s;
void option(){
	cout<<".Menu"<<endl;
	cout<<"1.qo'shilish"<<endl;
	cout<<"2.ayirish"<<endl;
	cout<<"3.ko'paytirish"<<endl;
	cout<<"4.bo'lish"<<endl;}
int mult(int c  ,int s){
	cout<<c+s;
	
	return c+s;
}
//void ayir(int a, int b){
	
	
//	return a-b;
//}
int main(){
	option();
	cout<<"tanlovni kirit: ";
	cin>>x;
	cout<<"a ni kirit: ";
    cin>>c;
	cout<<"b ni kirit: ";
    cin>>s;
    mult(c+s);
 
    
	
	
	
	return 0;
}