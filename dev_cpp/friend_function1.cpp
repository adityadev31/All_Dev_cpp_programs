#include<iostream>
#include<conio.h>
using namespace std;
class B;                     //classes must be declared before definition for appliying friend fuction
class C;
class A{
	private:int x;
	public:
		void get_data(){
			cout<<"Enter x: ";
			cin>>x;
		}
		void show_data(){cout<<"x = "<<x<<endl;}
		friend void editor(A,B,C); //declaring friend function//  //friend  function(class name ,class name)  
};                                 //parameters = class name shows that **objects are passed as parameters**//


class B{
	private:int y;
	public:
		void get_data(){
			cout<<"Enter y: ";
			cin>>y;
		}
		void show_data(){cout<<"y = "<<y<<endl;}
		friend void editor(A,B,C); //friend function is being declared in every class in which is to be used
};


class C{
	private:int z;
	public:
		void get_data(){
			cout<<"Enter z: ";
			cin>>z;
		}
		void show_data(){cout<<"z = "<<z<<endl;}
		friend void editor(A,B,C);
};




void editor(A ob1,B ob2,C ob3){  //classes will be called by objects (ob1,ob2,ob3)
	cout<<"Enter new x,y,z     ";
	cin>>ob1.x>>ob2.y>>ob3.z;     //entering x,y,z again by friend
}


int main(){
	A o1;                    
	B o2;
	C o3;
	o1.get_data();
	o1.show_data();
	o2.get_data();
	o2.show_data();
	o3.get_data();
	o3.show_data();
	editor(o1,o2,o3);       //calling friend function and related classes by passing objects of classes in main
	o1.show_data();
	o2.show_data();
	o3.show_data();
	cout<<"no change in actual members.......";
	return 0;
}

//note this is the copy of class members .......no change in actual members.......
