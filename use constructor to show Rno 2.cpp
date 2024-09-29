#include <iostream>
using namespace std;
class student{
int rollno;
public:
student(){
rollno=0;
cout<<"constructor here"<<endl;
}
void showrollno(){
cout<<"rollno"<<rollno<<endl;
}
};
int main(){
student s1 , s2;
s1.showrollno();
s2.showrollno();
}