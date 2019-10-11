#include<iostream>
#include<conio.h>
using namespace std;

int sum(int a, int b)
{
	int sum=a+b;
	return sum;
}

int main()
{
	int x,y,add;
	cout<<"enter a:  ";
	cin>>x;
	cout<<"enter b:  ";
	cin>>y;
	add=sum(x,y);
	cout<<"sum = "<<add;
	return 0;
}
