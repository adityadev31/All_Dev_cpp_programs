#include<iostream>
#include<conio.h>
using namespace std;

class watermelon{
	public:
		watermelon(){
			cout<<"This is constructor ;)\n";
		}
		~watermelon(){
			cout<<"This is destructor ;)\n";
		}
		void functon();
		
};
void watermelon::functon(){
	cout<<"We are in function....\tcoool\n";
}

int main(){
	watermelon ob;
	ob.functon();
}
