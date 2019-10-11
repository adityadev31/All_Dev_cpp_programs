#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node* start=NULL;

node*createNode(){
	node*temp;
	temp=new node;
	return temp;
}

void insertNode(){
	node *temp, *traverse;
	int n;
	cout<<"Enter-1 to end"<<endl;
	cout<<"Enter the vaues to be added to the list:   ";
	cin>>n;
	while(n!=-1){
		temp = createNode();
		temp->data=n;
		temp->next=NULL;
		
		if(start == NULL){
			start=temp;
		}
		else{
			traverse = start;
			while(traverse->next!=NULL){
				traverse=traverse->next;
			}
			traverse->next = temp;
		}
		cout<<"Enter the value to be addded to the list:  ";
		cin>>n;
	}
}

void printlist(){
	node *traverse = start;
	while(traverse!= NULL){
		cout<<traverse->data<<" ";
		traverse=traverse->next;
	}
}

int main(){
	int option;
	do{
		cout<<"\n          ---------------------------------Main Menu---------------------------------"<<endl;
		cout<<"1 : create list"<<endl;
		cout<<"2 : printlist"<<endl;
		cout<<"3 : exit"<<endl;
		cin>>option;
		
		switch(option){
			case 1:insertNode();
				   break;
			case 2:printlist();
				   break;
		}
	}
	while(option!=3);
}
