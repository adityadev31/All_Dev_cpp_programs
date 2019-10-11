#include<iostream>
#include<conio.h>
#define MAX 100
using namespace std;

class stack{
	private:
		int a[MAX],top;
	public:
		stack(){
			top=-1;
		}
		void Push(int x);
		void Pop();
		void print();
		//void top();
};


void stack :: Push(int x){
	if(top==MAX-1){
		cout<<"stack overflow\n";
	}
	else{
		top=top+1;
		a[top]=x;
	}
}


void stack :: Pop(){
	if(top==-1){
		cout<<"stack empty\n";
	}
	else{
		top=top-1;
	}
}



void stack :: print(){
	for(int i=0;i<=top;i++){
		cout<<a[i];
	}
	cout<<endl;
}


//void stack :: top(){
	



int main(){
	stack ob;
	ob.Push(2);
	ob.print();
	ob.Push(3);
	ob.print();
	ob.Push(4);
	ob.print();
	ob.Push(5);
	ob.print();
	ob.Pop();
	ob.print();
	ob.Pop();
	ob.print();
	ob.Pop();
	ob.print();
	ob.Pop();
	ob.print();
}
