#include<iostream>
#include<conio.h>
using namespace std;

class A{
	private:
		int x;
	public:
		int y;
		void get_xy(){x=10; y=20;}         // initiallizing values
		int private_inherit(){return x;}  // function to access the private members
};

class B : public A{
	private:
		int m;
	public:
		int n;
		void get_mn(){m=30; n=40;}          // initiallizing values
		int private_inherit2(){return m;}  // function to access the private members
};

int main(){
	B zz;
	zz.get_xy();
	zz.get_mn();
	cout<<"y = "<<zz.y<<endl;
	cout<<"n = "<<zz.n<<endl;
	cout<<"rest  are not inheritable"<<endl;   // but to inherit we can return private members via a public function
	cout<<"x = "<<zz.private_inherit()<<endl;
	cout<<"n = "<<zz.private_inherit2()<<endl;
	return 0;
}
