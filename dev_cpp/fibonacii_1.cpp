#include<iostream>
#include<conio.h>
using namespace std;

int sum=0;
int process(int a, int b, int num){
		if(a==0){
				cout<<a<<" "<<b;
			}
			if(num>=1){
				sum=a+b;
			    cout<<" "<<sum;
			    process(b,sum,num-1);
			}
	return 0;
}

int main(){
	int a=0,b=1,num;
	cout<<"enter the number of terms:     ";
	cin>>num;
	process(a,b,num-2);
	getch();
	return 0;
}
