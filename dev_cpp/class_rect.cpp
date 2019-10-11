#include<iostream>
#include<conio.h>
using namespace std;
  
class Rectangle{
	public:
		void getdata(int l, int b)
		   {
		   	  length=l;
		   	  breadth=b;
		   }
	    int area()
	    {
	    	int a;
	    	a=length*breadth;
	    	return a;
		}
		int peri()
		{
			int p;
			p=2*(length+breadth);
			return p;
			
		}

	private:
		int length,breadth;
	
};



int main()
   {   
       int x,y;
   	   Rectangle r;
   	   cout<<"enter length and breadth"<<endl;
   	   cin>>x>>y;
   	   r.getdata(x,y);
   	   cout<<"area = "<<r.area();
   	   cout<<endl;
   	   cout<<"perimeter = "<<r.peri();
   	   return 0;
   	
   	
   }
