#include <iostream>
using namespace std;
int main ()
{
	int n,x,a,c,k;
	cout<<"enter decimal number";
	cin>>x;
	n=x;
	cout<<"binary number is=";
	for (a=1;n!=0;a++)
	{n=n/2;}
	a=a-2;
	for (c=a; c>=0; c--)
	{k=x>>c;
	if (k&1)
	cout<<"1";
	else
	cout<<"0";
    }
    return 0;
}