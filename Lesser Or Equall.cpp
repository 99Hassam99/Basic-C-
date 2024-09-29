#include <iostream>
using namespace std;
int main()
{
	int Digit;
	cout<<"Enter The Digit="<<endl;
	cin>>Digit;
	if(Digit>=1&&Digit<=5)
      cout<<"You Have Entered A Valid Number"<<endl;
      if(Digit>=6&&Digit<=9)
      cout<<"You Have Entered an Invalid Number";
      return 0;
}