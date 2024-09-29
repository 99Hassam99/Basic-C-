#include <iostream>
using namespace std;
class student{
private:
string name;
int age;
public:
void SetName(string nm){
	name=nm;
}	
void Setage (int ag){
	age=ag;
}
void showname()
{
	cout<<"my name is="<<name<<endl;
}
void showage()
{
	cout<<"my age is="<<age;
}
};
int main(){
	student Std1;
	Std1.SetName("Hassam");
	Std1.Setage(20);
	Std1.showname();
	Std1.showage();
	return 0;
}