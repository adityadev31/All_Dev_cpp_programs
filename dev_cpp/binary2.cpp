#include<iostream>
#include<conio.h>
using namespace std;

void fibo_work(int num){
	int a[100],i=0;
	while(num>0){
	    a[i]=num%2;
	    num/=2;
	    i++;
	}
	while(i>0){
		i--;
		cout<<a[i]<<" ";
	}
 getch();
}


int main(){
	int x;
	cout<<"Enter number:\t";
	cin>>x;
	fibo_work(x);
	return 0;
}
