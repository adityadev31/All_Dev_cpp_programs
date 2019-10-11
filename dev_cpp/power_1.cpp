#include<iostream>
#include<conio.h>
using namespace std;

class Power{
	public:
		int calculation(int base, int power){
			if(power==0){
				return 1;
			}
			else{
				return(base*calculation(base,power-1));
			}
		}
};

int main(){
	Power obj;
	int lower,upper=2;
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
