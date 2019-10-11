#include<iostream>
using namespace std;

int i=0,j=0;

class Matrix{                // sum of a matrice by operator overloading
	private:
		int a[3][3];
	public:
		void get_data();
		void show_data();
		Matrix operator + (Matrix ob);
		Matrix operator - (Matrix ob);
};


void Matrix::get_data(){                        // input elements
	cout << "\nEnter the elements:-" << endl;
	for(i=0;i<3;i++){
		cout << endl;
		for(j=0;j<3;j++){
			cout << "a["<<i<<"]["<<j<<"] = ";
			cin >> a[i][j];
		}
	}
}


void Matrix::show_data(){               // showing data
	cout<<endl<<endl;
	for(i=0;i<3;i++)	{
		cout<<endl;
		for(j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
	}
}


Matrix Matrix::operator + (Matrix ob){                 // adding operators
	Matrix add;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			add.a[i][j] = a[i][j] + ob.a[i][j];
		}
	}
	return add;
}


Matrix Matrix::operator - (Matrix ob){                 // subtracting operators
	Matrix sub;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sub.a[i][j] = a[i][j] - ob.a[i][j];
		}
	}
	return sub;
}


int main(){
	int opt;
	Matrix ma1,ma2,mat3;
	ma1.get_data();
	ma2.get_data();
	cout<<"\n\nto add enter 1 for sub enter 2:\t";
	cin>>opt;
	
	try{
			if(opt == 1){mat3 = ma1 + ma2;}
			else if(opt == 2){mat3 = ma1 - ma2;}	
			else{throw 007;}
	}
	catch(int x){cout << "invalid input";}
	
	
	mat3.show_data();
	return 0;
}

