#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct student{
	char name[20];
	char branch[10];
	int roll;
}s1[20];

int main()
{
	int i=0,j=0,temp,num,count=0,a[5];
	cout<<"enter no. of datas you want to take:\t";
	cin>>num;
	system("cls");
	for(i=0;i<num;i++)
	{
	   cout<<"enter student "<<i+1<<" name:\t";
       cin>>s1[i].name;
       cout<<"enter roll:\t";
       cin>>s1[i].roll;
       cout<<"enter branch:\t";
       cin>>s1[i].branch;
       cout<<"\n\n"<<"enter the marks in the following five subjects:\nmaths,phy,chem,bio,eng\n";
          for(j=0;j<5;j++)
            {
            	cout<<"marks"<<j+1<<" = ";
            	cin>>a[j];
            	cout<<"\n";
			}
       system("cls");
	}
	
	
    
    cout<<"enter the roll no.\t";
    cin>>temp;
    system("cls");
    for(i=0;i<num;i++)
    {
    	if(temp==s1[i].roll)
          {
          	 cout<<"student "<<i+1<<" name:      "<<s1[i].name<<"\n\n";
             cout<<"student roll no.:    "<<s1[i].roll<<"\n\n";
             cout<<"student branch:      "<<s1[i].branch<<"\n\n";
                  for(j=0;j<5;j++)
                    {
                    	cout<<"marks"<<j+1<<" = "<<a[j]<<endl;
					}
		  }
		else
		  {
		  	count++;
		  }
	}
	if(count==num)
	{
		cout<<"data not found"<<"\nwrong input may be";
	}
    return 0;
}

