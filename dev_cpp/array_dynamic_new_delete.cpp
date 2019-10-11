#include<iostream>
#include<conio.h>
using namespace std;

void show_data(int a[],int num){
	for(int i=0;i<num;i++){
		cout<<a[i]<<endl;
	}
}


int main(){
	int *a=NULL;             // making a pointer for our new dynamic arrray
	int i,num;
	cout<<"Enter the array size:   ";
	cin>>num;
	a=new int[num];         // dynamic formation of our array
	for(i=0;i<num;i++){
		cout<<"Enter a["<<i+1<<"] = ";
		cin>>a[i];
		cout<<endl;
	}
	show_data(a,num);       //function to show data
	delete [] a;            //deleting an array
	cout<<a[2];            //proof
	return 0;
}
