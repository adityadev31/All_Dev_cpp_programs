#include<iostream>
#include<conio.h>
using namespace std;

class Fruits{
	private:
		int x;
	public:
		Fruits(int a){
			x=a;
		}
		void show(){
			cout<<x<<endl;
		}
		Fruits(Fruits &ob){       //copy constructor
			x=ob.x;               //putting value in x by object of constructor
		}
};

int main(){
	Fruits c1(100);
	Fruits c2=c1;
	Fruits c3(c1);
	c1.show();
	c2.show();
	c3.show();
	return 0;
}
