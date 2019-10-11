#include<iostream>                      // #include<iostream>
#include<conio.h>                       // #include<conio.h>
using namespace std;                    // using namespace std;

template <typename T>                   // typename = int,float,char   (say T=int);
T add(T a,T b){                         // int add(int a,int b){
	T result;                           // int result;
	result=a+b;                         // result=a+b
	return result;                      // return result;
}                                       // }

template<typename T>                    
T sub(T a,T b){                         // int sub(int a,int b){
	T result;                           // int result;
	result=a-b;                         // result=a-b;
	return result;                      // return result;
}                                       // }


template<typename T>                    
T mul(T a,T b){                         // int sub(int a,int b){
	T result;                           // int result;
	result=a*b;                         // result=a*b;
	return result;                      // return result;
}                                       // }


int main(){                             //int main(){
	cout<<add<int>(6,5)<<endl;          //cout<<add(6,5)<<endl;
	cout<<add<float>(5.1,4.2)<<endl;    //cout<<add(4.2,5.1)<<endl;
	cout<<sub<int>(6,5)<<endl;          //cout<<add(6,5)<<endl;
	cout<<sub<float>(5.1,4.2)<<endl;    //cout<<add(4.2,5.1)<<endl;
	cout<<mul<int>(6,5)<<endl;          //cout<<add(6,5)<<endl;
	cout<<mul<float>(5.1,4.2)<<endl;    //cout<<add(4.2,5.1)<<endl;
	return 0;                           //return 0;
}                                       //}



//conclusion template is the overall frame of program and function without any specific datatype..
//we have to replace the data-type by any variable (say T) ...
//while calling the functions we have to mention the data-type between function name and parameters by using<>.. 
