#include<iostream>
#include<conio.h>
using namespace std;

class fruits{
	private: int apple;                          //private data
	public:
		fruits(){apple=0;}
		
		
		friend void banana(fruits &ob);            //friend prototype  with an object of class to access it
		
		
		void display(){							  //displaying value of private data member
			cout<<apple<<endl;
		}
};

void banana(fruits &ob){                    //friend function
	ob.apple=16;							//acessing private member by the object he has
	cout<<ob.apple<<endl;
}

int main(){
	fruits object;
	object.display();                      //displaying value before reaching friend
	banana(object);                        //(calling banana by class object, indicating that it's the time to access the private members of the class
	object.display();                     //friend function changes the value of main class
}
