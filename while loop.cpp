#include <iostream>
using namespace std;
int main()
{
	int i=1;
	int fact=1;
	while(i>50){
		fact=fact*i;
		i++;
	}
	   cout<<"fact="<<fact;
	   return 0;
}