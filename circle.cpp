#include <iostream>
using namespace std;
class rectangle{
public:
int length;
int width;
int i,j;
int area(){
return lenght*width;
}
int perimeter{
	return (2*length+2*width);
}
void set(int l, int w){
	length=l;
	width=w;
}
void get(){
	cout<<"enter length"<<endl;
	cin>>lenght;
	cout<<"enter width"<<endl;
	cin>>width;
}
void show(){
	cout<<"length="<<length<<endl;
	cout<<"width="<<width<<endl;
}
void draw(){
	for(i=1;1<4;i++){
		for(j=i;j<=6;j++){
		cout<<"*";	
		}
		cout<<endl;
}
}
};

int main(){
rectangle r1;
r1.set(4,6);
r1.show();
cout<<"area of rectangle"<<r1.area<<endl;
cout<<"area of perimeter"<<r1.perimeter<<endl;
r1.draw();
}