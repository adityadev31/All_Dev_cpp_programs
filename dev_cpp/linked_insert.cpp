#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node *start=NULL;

node*createNode(){
	node *temp;
	temp=new node;
	return temp;
}

void insertNode(){
	node *temp, *traverse;
	int n;
	cout<<"Enter -1 to stop"<<endl;
	cout<<"Enter the value:   ";
	cin>>n;
	while(n!=-1){
		temp=createNode();
		temp->data=n;
		temp->next=NULL;
		if(start==NULL)
			start=temp;
		else{
			traverse=start;
			while(traverse->next!=NULL){
				traverse=traverse->next;
			}
			traverse->next=temp;
		}
		cout<<"Enter the value:   ";
		cin>>n;
		}
		
	}

void printNode(){
	node *traverse;
	traverse=start;
	while(traverse!=NULL){
		cout<<traverse->data<<" ";
		traverse=traverse->next;
	}
}


void Replace(){
	node *temp, *traverse, *before, *after;
	int value,index,count=0;
	cout<<"\nEnter the new data:   ";
	cin>>value;
	cout<<"Enter the position:   ";
	cin>>index;
	temp=createNode();
	temp->data=value;
	temp->next=NULL;
	traverse=start;
	while(count!=index){
		traverse=traverse->next;
		if(count==index-3)
			{before=traverse;}
		count++;
	}
	after=traverse;
	before->next=temp;
	temp->next=after;
}


void newInsert(){
	node *temp, *traverse, *before, *after;
	int value,index,count=1;
	cout<<"\nEnter the new data:   ";
	cin>>value;
	cout<<"Enter the position:   ";
	cin>>index;
	temp=createNode();
	temp->data=value;
	temp->next=NULL;
	if(index==1){
		temp->next=start;
		start=temp;
	}
	else{
	traverse=start;
	while(count!=index){
		traverse=traverse->next;
		if(count==index-2)
			{before=traverse;
			 getch();
			}
		count++;
	}
	after=traverse;
	before->next=temp;
	temp->next=after;
}
}


int main(){
	int opt;
	do{
		cout<<"\n              ...............Main Menu.............\n";
		cout<<"1:  create\n2:  print\n3:  replace\n4:  insert\n5:  exit\n";
		cin>>opt;
		switch(opt){
		case 1: insertNode();
				break;
		case 2: printNode();
				break;
		case 3: Replace();
				break;
		case 4: newInsert();
	}
	}while(opt!=5);
	
}
