#include <iostream>
using namespace std;
class student{
private:
int rollNo;
public:
student (int r): rollNo(r){
}
int getrollN0()const{
	return rollNo;
}
};
int main(){
	const student s1(10);
	cout<<"S1 rollNO="<<s1.getrollN0();
}