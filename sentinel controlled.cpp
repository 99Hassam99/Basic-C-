#include <iostream>
using namespace std;
int main ()
{
	int n;
	int sum=0;
	cout<<"Enter Number="<<endl;
	cin>>n;
	while (n!=1)
	{
	sum=sum+n;
	cout<<"Enter Number=";
	cin>>n;
	}
	cout<<"sum="<<sum;
	return 0;
}