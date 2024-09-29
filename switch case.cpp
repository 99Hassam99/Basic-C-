#include <iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter a number:";
	cin>>number;
	switch(number){
		case 1:
			cout<<"You Enter 1";
			break;
			case 2:
				cout<<"You Enter 2";
				break;
				case 3:
					cout<<"You Enter 3";
					case 4:
						cout<<"You Enter 4";
						break;
						case 5:
							cout<<"You Enter 5";
							break;
							case 6:
								cout<<"You Enter 6";
								break;
								default:
									cout<<"You Enter an Invalid key";
	}
	return 0;
}
