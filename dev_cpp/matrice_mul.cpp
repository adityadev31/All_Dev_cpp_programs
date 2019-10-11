#include<iostream>
#include<conio.h>
using namespace std;

class Matrice{
	private: int i=0,j=0,a[2][3],b[3][2];
	public:
		
		
		
		void get_data()
		{
			cout<<"Enter data of matrice 1"<<"\n\n";
			for(i=0;i<2;i++){
				cout<<endl;
				for(j=0;j<3;j++){
					cout<<"a["<<i<<"]["<<j<<"]:   ";
					cin>>a[i][j];
				}
			}
			
			cout<<"Enter data of matrice 2"<<"\n\n";
			for(i=0;i<3;i++){
				cout<<endl;
				for(j=0;j<2;j++){
					cout<<"b["<<i<<"]["<<j<<"]:   ";
					cin>>b[i][j];
				}
			}
		}
	
	    void calculation(){
	    	int c[2][2];
	    	for(i=0;i<2;i++){
	    		cout<<endl;
	    		for(j=0;j<2;j++){
	    			c[i][j]=a[i][0]*b[0][j]  +   a[i][1]*b[1][j]   +   a[i][2]*b[2][j];
	    			cout<<c[i][j]<<" ";
				}
			}
	    	
		}
	
	
	
	
	
};


int main(){
	Matrice obj;
	obj.get_data();
	//system("cls");
	obj.calculation();
	return 0;
}
