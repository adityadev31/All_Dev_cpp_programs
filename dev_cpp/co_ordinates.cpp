#include<iostream>
#include<conio.h>
using namespace std;

struct Graph_Points{
	int x,y;
}a[10];

int main(){
	int i,num,sum1=0,sum2=0;
	cout<<"Enter the number of points you want to sum:    ";
	cin>>num;
	for(i=0;i<num;i++){
		cout<<"Enter x"<<i+1<<" :-     ";
		cin>>a[i].x;
		cout<<"Enter y"<<i+1<<" :-     ";
		cin>>a[i].y;
		cout<<"\n\n";
	}
	cout<<"\n\n";
    for(i=0;i<num;i++){
    	sum1+=a[i].x;
    	sum2+=a[i].y;
	}
	cout<<"( "<<sum1<<" , "<<sum2<<" )"<<endl;
	return 0;
}
	

