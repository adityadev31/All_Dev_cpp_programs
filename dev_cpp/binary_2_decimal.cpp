#include<iostream>
#include<conio.h>
using namespace std;

class Decimal_binary{
	private: int x,a[20],i=0,j=0;
	public:
	int calculation(int x){
		if(x==1){
			a[i]=x;
			return 0;
		}
		else{
			a[i]=x%2;
	    	//	cout<<x/2<<" : "<<a[i]<<"\n";
			i++;
		    calculation(x/2);
		}
	}
	void display(){
		for(j=i;j>=0;j--){
			cout<<a[j];
		}
	getch();
	}
};

int main(){
	Decimal_binary obj;
	int num;
	cout<<"Enter the number to convert:\t";
	cin>>num;
	obj.calculation(num);
	obj.display();
	return 0;
}
