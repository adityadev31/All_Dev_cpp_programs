#include<iostream>
#include<conio.h>
using namespace std;

class Fruits{                 //parent class
	private:
		int a;
	public:
		int b;
		void set_ab();
		int get_a();
		void show_a();
};

class mango : public Fruits{   //child class inhereting parent publically
	private:
		int c;
	public:
		void mul();
		void display();
};

void Fruits::set_ab(){
	a=5; b=10;
}

int Fruits::get_a(){
	return a;
}

void Fruits::show_a(){
	cout<<"a = "<<a<<endl;
}

void mango::mul(){
	c=b*get_a();
}

void mango::display(){
	cout<<"a = "<<get_a()<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
}

int main(){
	mango ob;
	ob.set_ab();
	ob.mul();
	ob.display();
	
	ob.b=20;
	ob.mul();
	ob.display();
	return 0;
}
