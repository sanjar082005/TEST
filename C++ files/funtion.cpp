#include <iostream>
using namespace std;
int a, b;
int add(int a, int b){
	
	return a+b;
}
int deduct(int a, int b){
	
	
	return a-b;
}
int multiply(int a, int b){
	
	
	
	return a*b;
}
int bul(int a, int b){
	
	
	
	return a/b; 
}



int main(){
	cout<<"enter the first number: ";
	cin>>a;
	cout<<"enter the second number: ";
	cin>>b;
	cout<<add(a,b)<<endl;
	
	cout<<"enter the first number: ";
	cin>>a;
	cout<<"enter the second number: ";
	cin>>b;
	cout<<deduct(a,b)<<endl;
	
	cout<<"enter the first number: ";
	cin>>a;
	cout<<"enter the second number: ";
	cin>>b;
	cout<<multiply(a,b)<<endl;
	
	cout<<"enter the first number: ";
	cin>>a;
	cout<<"enter the second number: ";
	cin>>b;
	cout<<bul(a,b)<<endl;
	
	return 0;
}