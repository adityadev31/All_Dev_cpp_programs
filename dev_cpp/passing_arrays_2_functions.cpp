#include<iostream>
#include<conio.h>
using namespace std;

void fruits(int a[]){
	int i;
	for(i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
}




int main(){
	int a[10],i=0;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<endl;
	for(i=0;i<5;i++){
		cout<<a[i];
	}
	cout<<endl;
	fruits(a);
}
