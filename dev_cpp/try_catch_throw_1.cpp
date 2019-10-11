#include<iostream>
using namespace std;

int main(){
	int me , aakash;
	cout<<"Enter your age :\t";
	cin>>me;
	cout<<"Enter aakash's age:\t";
	cin>>aakash;
	
	try{
		if(aakash > me){
			throw 99;
		}
		else{
			cout<<"your age = " << me <<" aakash's age = "<< aakash <<endl;
		}
	}
	catch(int x){
		cout<<"You are befooling me ....hahaha gotcha..";
	}
	return 0;
}

