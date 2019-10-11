#include<iostream>
#include<conio.h>
using namespace std;

class Power{
	public:
		double calculation(double n, int p){
			if(p==0){
				return 1;
			}
			else{
				return(n*calculation(n,p-1));
			}
		}
};

int main(){
	Power obj;
	double lower;
	int upper=2;
	char choice;
	cout<<"\n\nEnter the base number:    ";
	cin>>lower;
	cout<<"\nDefault power = 2 \nYou want to change it?   (Y/N):        ";
	cin>>choice;
	if(choice=='y'||choice=='Y'){
	   cout<<"\n\nEnter the power:     ";
	   cin>>upper;	
	}
	cout<<"\n\nResult = "<<obj.calculation(lower,upper);
	return 0;
}
