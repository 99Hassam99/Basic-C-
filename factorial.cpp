#include <iostream>
using namespace std;
class factorial{
int num;
int n;
public:
int factorial;

void calculate_factorial(int num){
while(num>1){
factorial=factorial*n;
n--;	
}	
}
void get_factorial(){
	cout<<"enter number to find factorial"<<endl;
	cin>>num;
	if(num<0){
		cout<<"invalid number"<<endl;
	}
	else{
		cout<<"valid number"<<endl;
	}
	n=num;
	calculate_factorial(num);
}
void show_factorial(){
	cout<<"factorial of"<<num<<"="<<factorial<<endl;
}
};
int main(){
	factorial f1;
	f1.get_factorial();
	f1.show_factorial();
	return 0;
}