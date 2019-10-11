#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node *start=NULL;

node*create_node(){
	node *temp;
	temp=new node;
	return temp;
}

void insert_node(){
	node *temp, *traverse;
	int n;
	cout<<"Enter -1 to stop"<<endl;
	cout<<"Enter the value to the list:   ";
	cin>>n;
	while(n!=-1){
		temp=create_node();
		temp->data=n;
		temp->next=NULL;
		if(start==NULL){
			start=temp;
		}
		else{
			traverse=start;
			while(traverse->next!=NULL){
				traverse=traverse->next;
			}
			traverse->next=temp;
		}
		cout<<"Enter the value to the list:   ";
		cin>>n;
	}
}


void print_list(){
	node *temp, *traverse;
	traverse=start;
	while(traverse!=NULL){
		cout<<traverse->data<<" ";
		traverse=traverse->next;
	}
}



void insert_new_node(){
	node *temp, *traverse, *before, *after;
	int value, index,count=2;
	cout<<"Enter the value:   ";
	cin>>value;
	cout<<"Enter the position:  ";
	cin>>index;
	temp=create_node();
	temp->data=value;
	temp->next=NULL;
	if(index==1){
		temp->next=start;
		start=temp;
	}
	else{
		traverse=start;
		while(count!=index+1){
			traverse=traverse->next;
			if(count==index-1){
				before=traverse;
				//cout<<"*"<<before->data<<"*"<<endl;
				//getch();
			}
			count++;
		}
		after=traverse;
		//cout<<"*"<<after->data<<"*"<<endl;
		//getch();
		before->next=temp;
		temp->next=after;
	}
}



void replace(){
	node *temp, *traverse, *before, *after;
	int value, index,count=2;
	cout<<"Enter the value:   ";
	cin>>value;
	cout<<"Enter the position:  ";
	cin>>index;
	temp=create_node();
	temp->data=value;
	temp->next=NULL;
	if(index==1){
		temp->next=start->next;
		start=temp;
	}
	else{
		traverse=start;
		while(count!=index+2){
			traverse=traverse->next;
			if(count==index-1){
				before=traverse;
				//cout<<"*"<<before->data<<"*"<<endl;
				//getch();
			}
			count++;
		}
		after=traverse;
		//cout<<"*"<<after->data<<"*"<<endl;
		//getch();
		before->next=temp;
		temp->next=after;
	}
}


void delete_node(){
	node *traverse, *before, *after;
	int index,count=2;
	//cout<<"Enter the value:   ";
	//cin>>value;
	cout<<"Enter the position:  ";
	cin>>index;
	/*temp=create_node();
	temp->data=value;
	temp->next=NULL;*/
	if(index==1){
		start=start->next;
	}
	else{
		traverse=start;
		while(count!=index+2){
			traverse=traverse->next;
			if(count==index-1){
				before=traverse;
				//cout<<"*"<<before->data<<"*"<<endl;
				//getch();
			}
			count++;
		}
		after=traverse;
		before->next=after;
		
		//cout<<"*"<<after->data<<"*"<<endl;
		//getch();
		
	}
}


int main(){
	int opt;
	do{
	cout<<"                ...........Main Menu........\n";
	cout<<"\n1:  create new list\n2:  print list\n3:  insert\n4:  replace\n5:  merge new list\n6:  delete\n7:  exit\n";
	cin>>opt;
	switch(opt){
		case 1: start=NULL;
				insert_node();
				break;
		case 2: print_list();
				break;
		case 3: insert_new_node();
				break;
		case 4: replace();
				break;
		case 5: insert_node() ;
				break;
		case 6: delete_node();
				break;
	}
}while(opt!=7);
}
