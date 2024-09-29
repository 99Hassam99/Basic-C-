#include <iostream>
using namespace std;
class rectangle{
public:
int length;
int width;
int i,j;
int area(){
	return length*width;
}
int perimeter(){
	return (2*length+2*width);
}
void set(int l, int w){
	length=l;
	width=w;
}
void get(){
	cout<<"Enter Length"<<endl;
	cin>>length;
	cout<<"Enter width"<<endl;
	cin>>width;
}
void show(){
	cout<<"Length="<<length<<endl;
	cout<<"Width="<<width<<endl;
}
void draw(){
for(int i=1; 1<4; i++){
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
	cout<<"area of rectangle"<<r1.area()<<endl;
	cout<<"perimeter of rectangle"<<r1.perimeter()<<endl;
	r1.draw();
}