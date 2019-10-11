#include<iostream>
using namespace std;


int get_data(int a[], int num){                         // get data funct.
	cout << endl << "Enter the Elements:-" << endl;
	for(int i=0;i<num;i++){
		cin >> a[i];
	}
	return 0;
}


int temp_data(int a[], int index){     // temp data funct.
	int *temp;
	temp = new int[index];
	for(int i=0;i<index;i++){
		temp[i] = a[i];
	}
	return 0;
}



int shift_data(int a[],int temp, int num, int index){    // shifting data funct.
	for(int i=index;i<num;i++){
		a[i-index] = a[index];
	}
	for(int i=0;i<index;i++){
		a[num-index+i] = temp[i];
	}
	return 0;
}


int print_data(int a[], int num){      // printing data
	cout << endl <<"Rotated Elements are:- "<< endl;
	for(int i=0;i<num;i++){
		cout << a[i] << " ";
	}
	return 0;
}



int main(){
	
		int *a,*temp,num,index;
		cout << "Enter the number of elements:-" << endl;
		cin >> num;
		cout << endl << "Enter the rotation index:-" ;
	    cin >> index;
		a = new int[num];
		temp = new int[index];
	
	get_data(a,num);
	temp = temp_data(a,index);
	shift_data(a,num,index,temp);
	print_data(a,num);
	return 0;
}

