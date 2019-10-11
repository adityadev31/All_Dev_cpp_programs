#include<iostream>
#include<conio.h>
using namespace std;

class fruits{
	public:
	void watermelon() const{
	cout<<"\nWe are in watermelon\n";
    }

};

int main(){
    const fruits obj;
	obj.watermelon();
	const int x=5;
	cout<<x;
}
