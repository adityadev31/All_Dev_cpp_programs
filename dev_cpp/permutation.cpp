#include<iostream>
#include<conio.h>
using namespace std;


class Permutation{
	private: int i,j,temp;
	         char a[10];
	public:
		int get_data(){
			cout<<"Enter no. of letters you have:     ";
			cin>>j;
			temp=j;
			cout<<"\n\n\n\nEnter the letters:     ";
			cin>>a;
			for(i=0;i<j;i++){
				cout<<a[i];
			}
			return 0;
		}
	/*	void swap(char x,char y){
			
			}*/
};



int main(){
	Permutation obj;
	obj.get_data();
	return 0;
}
