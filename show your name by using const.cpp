#include <iostream>
using namespace std;
class student{
string name;
public:
student(string nm){
name=nm;
}
string getname()const{
	return name;
}
void showinfo()const{
	cout<<"name="<<getname();
}
};
int main(){
	student s("shaq");
	cout<<s.getname();
}