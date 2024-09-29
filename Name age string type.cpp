#include <iostream>
using namespace std;
class student{
string name;
int age;
public:
void setname(string nm){
	name=nm;
}
void setage(int ag){
	age=ag;
}
void showname(){
	cout<<"My Name ="<<name<<endl;
}
void showage(){
	cout<<"My age ="<<age<<endl;
}
};
int main(){
	student std1;
	std1.setage(20);
	std1.setname("Hassam");
	std1.showage();
	std1.showname();
	
	student std2;
	std2.setage(19);
	std2.setname("zain");
	std2.showage();
	std2.showname();
	return 0;
}