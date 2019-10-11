#include<iostream>
#include<conio.h>
using namespace std;

class fruits{
	public:
		void apple();               //declaring public functions
		void banana();
		void orange();
};

void fruits::apple(){
	cout<<"\nI'm an apple";
}

void fruits::banana(){
	cout<<"\nI'm a banana";
}

void fruits::orange(){
	cout<<"\nI'm an orange";
}



int main(){
	fruits obj;
	fruits *point=&obj;
	point->apple();
	point->banana();
	point->orange();
}
