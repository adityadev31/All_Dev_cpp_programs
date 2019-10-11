#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class aditya_class{
	private: int height,age,weight;
	public:
	aditya_class(){       //CONSTRUCTOR is mainly used to initialize the private data members.
		cout<<"Height ";
		cin>>height;
		cout<<"Age";
		cin>>age;
		cout<<"Weight";
		cin>>weight;
	}
		void calculation(){
			if((height>50)&&(age>40)&&(weight<80)){
				cout<<"\nYou are qualified!!\tcongractulations!!";
			}
			else{
				cout<<"\nYou are not qualified";
			}
		   getch();
		}
};

int main(){
	aditya_class bo;
	bo.calculation();
	return 0;
}
