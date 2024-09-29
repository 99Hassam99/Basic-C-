#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter your marks:";
	cin>>marks;
	if(marks>=90)
	cout<<"Your Grade is A";
	else if(marks>=75)
	cout<<"Your Grade is B";
	else if(marks>=60)
	cout<<"Your Grade is C";
	else
	cout<<"You are Failed";
	return 0;
}