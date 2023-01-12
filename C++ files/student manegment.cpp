#include <iostream>
#include <vector>
using namespace std;
void displayMenu(){
	cout<<"1. add Student"<<endl;
	cout<<"2. find Student"<<endl;
	cout<<"3. delate Student"<<endl;
	cout<<"4. show all Student"<<endl;
	cout<<"5. Exit"<<endl;

}
struct Student{
	string name;
	int id;
	Student(const string &name, const int &id){
		this->name=name;
		this->id=id;
	}
};
class Student_operations{
	private:
		vector<Student> student;
	public:
	    void add_student(){
	    	string name;
	    	int id;
	    	cout<<"enter your name";
	    	cin>>name;
	    	cout<<"enter your id";
	    	cin>>id; 	
      Student newStudent(name,id);
	   this->student.push_back(newStudent);
	   cout<<name<<"added"<<endl;
	   sleep(3);
	   system("cls");
	}
void find_student(){
	int id;
	cout<<"Enter student id to find: ";
	cin>>id;
	for(auto it==students.begin(); it!=students(); ++it){
		if(it->id=id<<" "<<" " <<it->name<<endl;);
		sleep(3);
		system("cls");
	}
	
}
	
	
	
	
	
	
	
	
	
};
  
  int main(){
  	char op;
  	Student_operations so;
  	displayMenu();
  	
  	cout<<"enter your choice";
  	cin>>op;
  	 switch(op){
  	 	case '1':
  	 		so.add_student();
  	 		 break;
  	 	case '2':
		    cout<<"find student";
		    break;
		case '3':
		    cout<<"delate student";
		    break;
		case '4':
		    cout<<"show all student";
		    break;
		case '5':
		    cout<<"exit";
		    break;
		default:
		   cout<<"ivalid choice";
		    break; 
	   }
  		return 0;
}
