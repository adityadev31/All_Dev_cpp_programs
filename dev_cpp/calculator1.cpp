#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,sexy;
	char sign,choice;
	sexy:
	system("cls");
	cout<<"Enter a :   ";
	cin>>a;
	cout<<"Enter b :   ";
	cin>>b;
	cout<<"\n\nEnter character:\n+,-,*,/\t\t";
	cin>>sign;
	system("cls");
	switch(sign){
		case '+': cout<<a<<" + "<<b<<" = "<<a+b<<endl;
		break;
		case '-': cout<<a<<" - "<<b<<" = "<<a-b<<endl;
		break;
		case '*': cout<<a<<" * "<<b<<" = "<<a*b<<endl;
		break;
		case '/': cout<<a<<" / "<<b<<" = "<<a/b<<endl;
		break;
		default: cout<<"Bakchodi macha di na...."<<endl;
	}
	cout<<"\n\n\n";
	cout<<"if you want to calculate again then press 'Y' else 'N'\t\t";
	cin>>choice;
	if(choice=='y'||choice=='Y')
	goto sexy;
	else
	cout<<"\nThanks"<<endl;
	return 0;
}
