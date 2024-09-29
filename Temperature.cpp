#include <iostream>
using namespace std;
class temperature{
int c;
int f;
public:
temperature(){
}
void get_c(){
cout<<"temperature in centigrade"<<endl;
cin>>c;
}
void get_f(){
cout<<"temperature in fahrenheit"<<endl;
cin>>f;
}
void show_c(){
cout<<"temperature in centrigrade ="<<c<<endl;
}
void show_f(){
cout<<"temperature in fahrenheit ="<<f<<endl;
}
};
int main(){
	temperature t1, t2;
	t1.get_c();
	t1.get_f();
	t1.show_c();
	t1.show_f();
	
	t2.get_c();
	t2.get_f();
	t2.show_c();
	t2.show_f();
}