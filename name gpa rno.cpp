#include <iostream>
using namespace std;
class student{
int rno;
string name;
float gpa;
public:
student(int rn,string nm, float gp){
rno=rn;	
name=nm;
gpa=gp;
}
void showinfo(){
cout<<"name="<<name<<endl;
cout<<"rollno="<<rno<<endl;
cout<<"gpa="<<gpa<<endl;
}
};
int main (){
	student s1(1,"shaq",2.9) , s2(2,"ahmad",3.2);
	s1.showinfo();
	s2.showinfo();
}