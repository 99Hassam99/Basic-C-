#include <iostream>
using namespace std;
class student{
int rollno;
public:
student (int r){
	rollno=r;
	cout<<"constructor here"<<endl;
}
void showrollno(){
	cout<<"rollno"<<rollno<<endl;
}
};
int main(){
	student s1(10),s2(20);
	s1.showrollno();
	s2.showrollno();
}