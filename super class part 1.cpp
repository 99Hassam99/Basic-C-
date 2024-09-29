#include <iostream>
using namespace std;
class super{
private:
int storage;
public:
	void put(int val){storage=val;}
	int get(void) {return storage;}	
};
int main(void){
	super object;
	
	object.put(100);
	object.put(object.get()+1);
	cout<<object.get()<<endl;
	return 0;
}