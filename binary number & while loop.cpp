#include <iostream>
using namespace std;
int main ()
{
	int num,bin;
	cout<<"Enter the number to convert:";
	cin>>num;
	cout<<"The Binary Digit:";
	while (num>0)
	{
		bin=num%2;
		cout<<"bin";
		num/=2;
	}
	return 0;
}