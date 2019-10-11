#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num,rem,sum=0,temp;
	cout<<"Hi!!, everyone this is Aditya dev. \nWe are inside a prgram for summing up the digits of the entered number.\n\nPlease enter a number:\t";
	cin>>num;
	temp=num;
	while(num!=0){
		
		rem=num%10;
		sum=sum+rem;
		num/=10;
	}
	system("cls");
	cout<<"sum of the digits of "<<temp<<" = "<<sum<<endl;
	getch();
	return 0;
	
}
