#include<iostream>
#include<conio.h>
using namespace std;

class aditya{
	private: int x;
	public:
		 aditya(int num){
			x=num;
		}
	void DOB(){
		cout<<this->x<<endl;    //this pointer stores the address location of the currently using object
	}
};

int main(){
	aditya dev(31);
//	aditya *point=&dev;
//  point->DOB;
	dev.DOB();
//  aditya ujj(29);
//  dev.DOB();
}
