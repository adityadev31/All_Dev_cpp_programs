#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char a[10],temp;
	cout<<"Enter the characters:    ";
	cin>>a;
	temp=a[0];
	a[0]=a[1];
	a[1]=temp;
	cout<<a;
	return 0;
}
