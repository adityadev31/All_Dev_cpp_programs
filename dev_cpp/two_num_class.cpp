#include<iostream>
#include<conio.h>
using namespace std;

class Two_num
{
	public:
		int get_data()
		{
			int x,y;
			cout<<"enter a:  ";
			cin>>x;
			cout<<"enter b:  ";
			cin>>y;
			a=x;
			b=y;
		}
		int sum_data()
		{
			cout<<"\nsum = "<<(a+b);
			return 0;
		}
		int sub_data()
		{
			cout<<"\nsub = "<<(a-b);
			return 0;
		}
		int mul_data()
		{
			cout<<"\nmul = "<<(a*b);
			return 0;
		}
		int div_data()
		{
			cout<<"\ndiv = "<<(a/b);
			return 0;
		}
	 
	private:
		int a,b;
	
};


int main()
{
	int sum,sub,mul,div;
	Two_num sexy;
	sexy.get_data();
	sexy.sum_data();
	sexy.sub_data();
	sexy.mul_data();
	sexy.div_data();
	return 0;
}
