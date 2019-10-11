#include<iostream>
#include<conio.h>
using namespace std;

class Playing{
	private: int num,sum=0,rem=0;
	public: 
	int get_data(int x){
		num=x;
	}
	int sexy_moves(){
		int temp;
		while(num!=0){
			rem=num%10;
			sum+=rem;
			num/=10;
	    }
	        temp=sum;
			return temp;
	}
};

int main(){
	int number;
	Playing ob;
	cout<<"enter the number:\t";
	cin>>number;
	ob.get_data(number);
	cout<<"sum = "<<ob.sexy_moves()<<endl;
	return 0;
}
