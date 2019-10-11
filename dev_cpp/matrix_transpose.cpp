#include<iostream>
#include<conio.h>
using namespace std;

int i=0,j=0;

class Matrix{
	private:
		int a[3][3];
	public:
		void getdata();
		void inserted_data();
		Matrix transpose();
		void transposed_data();
};

void Matrix::getdata(){       // insertion of the data
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"a[i][j] = " ;
			cin>>a[i][j];
		}
	}
}

void Matrix::inserted_data(){          // showing inserted data
	cout<<"Inserted data :-"<<endl;
	for(i=0;i<3;i++){
		cout<<endl;
		for(j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
	}
}


Matrix Matrix::transpose(){        // calculating transpose
	Matrix x;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			x.a[j][i] = a[i][j];
		}
	}
	return x;
}


void Matrix::transposed_data(){       // showing transposed data
	cout<<"Transposed data:-\n";
	for(i=0;i<3;i++){
		cout<<endl;
		for(j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
	}
}

int main(){
	Matrix ob1;
	ob1.getdata();
	cout<<endl<<endl;
	ob1.inserted_data();
	cout<<endl<<endl;
	Matrix ob2 = ob1.transpose();
	cout<<endl<<endl;
	ob2.transposed_data();
	return 0;
}
