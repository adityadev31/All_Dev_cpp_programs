#include<iostream>
#include<conio.h>
using namespace std;
 
struct node{  int data; node *next; };                      // Enqueue Dequeue
	
node *front=NULL,*rear=NULL;

node*create_node(){
	node *temp;
	temp = new node;
	return temp;
}

// for enqueue

void enqueue(){
	int x;
	node *temp;
	temp=create_node();
	cout<<"enter data: ";
	cin>>x;
	temp->data=x;
	temp->next=NULL;
	
	
	if(front==NULL && rear==NULL) {front=rear=temp;}               // 1.) No Element
	
	else {                                                         // 2.) One or more Element
	rear->next=temp;
	rear=rear->next;
	}
}

// for equeue

void dequeue(){
	
	if(front==NULL && rear==NULL){cout<<"Empty"<<endl;}                             // 1.) No Element
	
	else if(front==rear) {front=NULL; rear=NULL;cout<<"Empty"<<endl;}               // 2.) One Element
	
	else {front=front->next;}                                                       // 3.) Many Elements
}

// for print

void print(){
	node *trav;
	trav=front;
	while(trav!=NULL){
		cout<<trav->data<<" ";
		trav=trav->next;
	}
}

int main(){
	int opt;
	do{
		cout<<endl<<"1.) enqueue   2.) dequeue    3.) print    4.)end"<<endl;
		cin>>opt;
		switch(opt){
			case 1: { enqueue(); break;}
				
			case 2:{ dequeue(); break;}
				
			case 3:{ print(); cout<<endl; break;}
			
			default: cout<<"wrong input";
		}
		
	}while(opt!=4);
	return 0;
}
