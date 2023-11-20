#include<iostream>
using namespace std;

class Lqueue
{
 typedef struct node
 {
	 int data;
	 struct node *next;
 }Q;
 Lqueue()
 {
	 front=NULL;
	 rear=NULL;
 }
 void insert(int item);
 void del();
 void display();
}

void Lqueue::insert(int item)
{
	int ele;
	Q *p,*q;
	cout<<"enter element =";
	cin>>ele;
	p=new Q;
	p->data=ele;
	p->next=NULL;
	
	if(front==NULL)
	{
		front=rear=p;
	}
	else{
		rear->next=p;
		rear=p;
	}
}

void Lqueue::del()
{ 	Q *p,*q;

	if(front==-1)
	{
		cout<<"underflow;
	}
	else{
		q=front;
		front=front->next;
		q->next=NULL;
	}
}
void Lqueue::display()
{
	Q *p,*q;
	int data;
	if(front==NULL)
	{
		cout<<"underflow";
	}
	else{
		front=p;
		while(p->next!=NULL)
		{
			cout<<p->data;
			p=p->next;
		}
		cout<<p->data;
	}
}

int main()
{
	int ch;
	int size;
	int item;
	Lqueue x;
	do{
	cout<<"enter choice \n1.insert \n2.delete \n3.display";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter element";
			cin>>item;
			x.insert(item);
			break;
		case 2:
			x.del();
		case 3:
			x.display();
		default:cout<<"wrong choice";
	}
	}while(ch!=4);
}