#include<iostream>
using namespace std;

int main(){
	int *a,*temp,num,index;
	cout << "Enter the no. of elements:-\t";
	cin >> num;
	a = new int[num];
	
	cout << endl << "Enter the elements:-" << endl ;   // entering the elements
	for(int i=0;i<num;i++){
		cin >> a[i];
	}
	
	cout << endl << "Enter the rotation index:-";    // storing rotation elements
	cin >> index; 
	temp = new int[index];
	for(int i=0;i<index;i++){
		temp[i] = a[i];
	}
	
	cout << "Shifting the elements:-\n";   // shifting the elements
	for(int i=index;i<num;i++){
		a[i-index] = a[i];
	}
	for(int i=0;i<index;i++){
		a[num-index+i] = temp[i];
	}
	
	
	cout << "Printing the rotated elements:-";   // Printing the values
	for(int i=0; i<num;i++){
		cout << a[i] << " ";
	}
	return 0;
}

