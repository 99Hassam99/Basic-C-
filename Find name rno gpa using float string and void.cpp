#include <iostream>
using namespace std;
class student{
int rno;
string name;
float gpa;
public:
	student (int rn,string nm,float gp){
	name=nm;
	rno=rn;
	gpa=gp;
	}
student(int rn, string nm){
	rno=rn;
	name=nm;
}
void showinfo(){
	cout<<"name="<<name<<endl;
	cout<<"rollno="<<rno<<endl;
	cout<<"gpa="<<gpa<<endl;
}
};
int main (){
	student s1(1,"shaq",4.0),s2(2,"a",3.9),s3(3,"Q",3.5);
	s1.showinfo();
	s2.showinfo();
	s3.showinfo();
}