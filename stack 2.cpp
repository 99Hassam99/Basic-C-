#include <iostream>
using namespace std;

int stack[100],
n=100;
ptr=-1;
bool isFull(){
	if(ptr>=n-1){
		return true;
		}
		else{
			return false;
		}
}

void push(int val){
	if(is full){
		cout<<"Stack overflow"<<endl;
	}
	else{
		ptr=ptr+1;
		stack[ptr]=val;
	}
}
bool isEmpty(){
	if(ptr<=-1){
		return true;
	}
	else{
		return false;
	}
}
void pop(){
	int val;
	if(isEmpty){
		cout<<"Stack Underflow"<<endl;
	}
	else{
		val=stack[ptr];
		ptr=ptr-1;
	}
}
void display(){
	if(ptr>=0){
		cout<<"Stack elements are:";
		for(int i=ptr;i>0;i--)
		cout<<stack[i],," ";
		cout<<endl;
	}
	else{
		cout<<"Stack is empty"<<endl;
	}
}

void menu(){
	int ch, val;
	cout<<"1)Push in Stach"<<endl;
	cout<<"2)Pop from stack"<<endl;
	cout<<"3)Display stack"<<endl;
	cout<<"4)Exit"<<endl;
	do{
		cout<<"Enter choice:";
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"Enter value to be pushed:"<<" ";
				cin>>val;
				push(val);
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				cout<<"Exit"<<endl;
				break;
			}
			default:{
			cout<<"Invalid choice"<<endl;
			}
		}
	}
	while(ch!=4);	
}
int main(){
	Menu();
	
	return 0;
}
