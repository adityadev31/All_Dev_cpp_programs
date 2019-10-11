#include<iostream>
using namespace std;

class Complex{
	private:
		int real , imag;
	public:
		Complex(int r=0, int i=0){
			real = r; imag = i;
		}
		
		Complex operator + (Complex ob){
			Complex temp;
			temp.real = real + ob.real;
			temp.imag = imag + ob.imag;
			return temp;
		}
		
		
		void print(){
			cout << real <<" + i" << imag ; 
		}
};

int main(){
	Complex ob1(2,3), ob2(4,5) , ob3;
	ob3 = ob1 + ob2 ; 
	ob3.print();
	return 0;
}

