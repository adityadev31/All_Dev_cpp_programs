#include<iostream>
using namespace std;

int main(){
	int mom,son;
	cout << "Enter mom's age:\t";
	cin >> mom;
	cout << "Enter son's age:\t";
	cin >> son;
	try{
		if(mom < son){ throw 99; }
		else{
			cout << "your mom's age = "<< mom <<"and your age = "<< son << endl;
		}
	}
	catch(int x){
		cout << "Mom can't be younger than son";
		}	
	
	return 0;
}

