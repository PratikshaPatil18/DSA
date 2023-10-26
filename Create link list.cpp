#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node*next;
};
struct node *head=NULL,*p,*q,*r;
void create()
{
	int key;
	cout<<"enter key =";
	cin>>key;
	
	p=new node;
	
	p->data=key;
	p->next=NULL;
	
	if(head==NULL)
	{
		p=head;
	}
	else
	{
		p->next=head;
		head=p;
	}
}

void display()
{
	struct node *p;
	if(head==NULL)
	{
		cout<<"empty list";
	}
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			cout<<p->data;
			cout<<"->";
			p=p->next
		}
		cout<<p->data;
	}
	
}
void del_beg()
{
	struct node *p;
	if(head==NULL)
	{
		cout<<"empty list";
	}
	else
	{
		p=head;
		head=p->next;
		p->next=NULL;
	}
}

void insert_end()
{
	 struct node *p,*r;
	 int key;
	 cout<<"enter key =";
	 cin>>key;
	 
	 p=new node;
	 
	 p->data=key;
	 p->next=NULL;
	 if(head==NULL)
	 {
		 cout<<"empty list";
	 }
	 else
	 {
		 r=head;
		 while(r->next!=NULL)
		 {
			 r=r->next;
		 } r->next=p;
		 
	 }	 
}
int main()
{
	int ch;
	do{
	cout<<"enter your choice ";
	cin>>ch;
	
	switch(ch)
	{
		case 1: create();
		        break;
		case 2:display();
				break;
		case 3:del_beg();
				break;
				
		case 4:insert_end();
				break;
				
		default : cout<<"enter wrong Choice";
	}
	}while(ch<6);
	return 0;
}