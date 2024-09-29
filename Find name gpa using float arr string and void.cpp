#include <iostream>
using namespace std;
class student{
string name;
float gpa;
public:
	student(){
	}
	student(string nm,float gp){
		nm=name;
		gp=gpa;
	}
	void get(){
		cout<<"Enter name:"<<endl;
		cin>>name;
		cout<<"enter gpa:"<<endl;
		cin>>gpa;
	}
	void show(){
		cout<<"name is ="<<name<<endl;
		cout<<"gpa is ="<<gpa<<endl;
	}
};
int main(){
	student s1 , s2;
	s1.get();
	s1.show();
	s2.get();
	s2.show();
}