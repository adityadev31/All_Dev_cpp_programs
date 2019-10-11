#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,result;
	char sign;
	cout<<"enter 1st num:    ";
	cin>>a;
	cout<<"\nenter 2nd num:     ";
	cin>>b;
	cout<<"\nenter the operators:   +,-,*,/    :\t";
	cin>>sign;
	if(sign=='+') result=a+b;
	if(sign=='-') result=a-b;
	if(sign=='*') result=a*b;
	if(sign=='/') result=a/b;
                  

	cout<<"\n"<<result;
	return 0;
}
