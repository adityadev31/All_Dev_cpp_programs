#include<iostream>
#include<conio.h>
using namespace std;

class Binary{
	private: int num,i=0,j=0,a[20];
	public:
		
		Binary(){                                               //constructor
			cout<<"\nEnter the number to convert:     ";
			cin>>num;
		}
		
/*		~Binary(){
			cout<<"see u soon aligator!!";
		}*/
		
		int calculation(){                                     //calculator
			while(num!=0){
				a[i]=num%2;
				num/=2;
				i++;
			}
		}
		
		void display(){                                     //display
			for(j=i-1;j>=0;j--){
				cout<<a[j]<<" ";
			}
		}
};

int main(){
	char opt;
	restart: Binary ob;
	ob.calculation();
	ob.display();
	cout<<"\n\nDo you want to restart?(y/n)      ";
	cin>>opt;
	if(opt==89||opt==121){
		goto restart;
	}
	else{
		cout<<"see u soon aligator!!";
	}
	
}
