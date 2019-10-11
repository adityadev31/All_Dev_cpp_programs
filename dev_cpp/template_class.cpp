#include<iostream>                 //#include<iostream>
#include<conio.h>                  //#include<conio.h>
using namespace std;               //using namespace std;

template<typename T>               //declaring that we are using template with typename 'T'
class color{
	public:
		void blue(T, T);              //int blue(int ,int);  but since we don't want to have return type we will use "void"...
		void red(T);                  //int red(int);
		void yellow(T,T);             //int yellow(int ,int);
};

template<typename T>               //declaration befare each function definition
void color<T>::blue(T a,T b){      //(funct. type  WE CAN ALSO WRITE "T color<T>" IF WE WANT TO GET RETURN TYPE OF THE ENTERED DATA-TYPE) (class<T> coz. class is also template type)::(funct.name)(parameters)
cout<<"a = "<<a<<" , b = "<<b<<endl;
}

template<typename T>
void color<T>::red(T c){
	cout<<"c = "<<c<<endl;
}

template<typename T>
void color<T>::yellow(T d, T e){
	cout<<"d = "<<d<<" e = "<<e<<endl;
}

int main(){
	color<int>ob1;
	color<float>ob2;
	ob1.blue(1,2);
	ob1.red(3);
	ob1.yellow(4,5);
	ob2.blue(1.1,2.1);
	ob2.red(3.1);
	ob2.yellow(4.1,5.1);
	return 0;
}
