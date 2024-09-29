#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;
	bool found=false;
	while(! found){
		cout<<"enter no=";
		cin>>n;
		if(n%2==1)
		found=true;
		else
		sum=sum+n;
	}
	cout<<"sum="<<sum;
}