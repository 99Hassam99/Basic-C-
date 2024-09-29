#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter your marks=";
	cin>>marks;
	if(marks>=80 && marks<=100)
	cout<<"your grade is A+";
	else if(marks>=70 && marks<80)
	cout<<"your grade is A";
	else if(marks>=60 && marks<70)
	cout<<"your grade is B";
	else if(marks>=50 && marks<60)
	cout<<"your grade is C";
	else if(marks>=40 && marks<50)
	cout<<"your grade is D";
	else
	cout<<"fail";
	return 0;
}