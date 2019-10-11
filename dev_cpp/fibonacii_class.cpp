#include<iostream>
#include<conio.h>
using namespace std;
class Fibonaci{
	private:
		int sum=0;
	public:
		void process(int a, int b, int x){
			if(a==0){
				cout<<a<<" "<<b;
			}
			if(x>0){
			     sum=a+b;
			     cout<<" "<<sum;	
			     process(b,sum,x-1);
			}
		}
};
int main(){
	Fibonaci obj;
	int number,a=0,b=1;
	cout<<"Enter the number of terms you want:  ";
	cin>>number;
	cout<<"\n";
	obj.process(a,b,number-2);
	return 0;
}
