#include <iostream>
using namespace std;
class student{
string name;
private:
int rollno;
public:
int age;
void showname(string nm){
	name=nm;
}
void showage(int ag){
	age=ag;
}
void showrollno(int rn){
	rollno=rn;
	if(rn<0){
		cout<<"invalid"<<endl;
	}
	else
	cout<<"valid"<<endl;
}
void setname(){
	cout<<"My Name ="<<name<<endl;
}
void setage(){
	cout<<"My age ="<<age<<endl;
}
void setrollno(){
	cout<<"My Roll No ="<<rollno<<endl;
}
};
int main(){
	student std1;
	std1.setname("Hassam");
	std1.setage(20);
	std1.setrollno(48);
	std1.showname();
	std1.showage();
	sdt1.showrollno();
	return 0;
}