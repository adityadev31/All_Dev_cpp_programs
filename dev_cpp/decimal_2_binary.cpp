#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	int num,sum=0,a[100],i=0;
	cout<<"Enter binary number:\t";
	cin>>num;
	while(num!=0){                //collection of data as arrays
		a[i]=num%10;
		num/=10;
        i++;     		            //cout<<a[i]<<"   "<<i<<endl;
	}
	//cout<<i<<endl;
	i-=1;                         //decrementing i by one value due to extra increase in while loop
	//cout<<i;
	while(i>=0){                 //calculation
		sum+=a[i]*pow(2,i);
		i--;
	}
	cout<<"\n\n"<<sum;
	return 0;
}
