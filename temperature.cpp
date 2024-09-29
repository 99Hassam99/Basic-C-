#include <iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"enter temperature";
	cin>>temp;
	if(temp<10)
	cout<<"the weather is cold";
	if(temp>=10 && temp<=25)
	cout<<"the temperature is pleasant";
	if(temp>25 && temp<=40)
	cout<<"the weather is hot";
	if(temp>40)
	cout<<"the weather is too hot";
	return 0;
}