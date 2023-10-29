#include<iostream>
using namespace std;


class Queue
{
	struct Queue
	{
	int q[5];
	int front,rear;
	}Q;
	
	Queue()
	{
		Q.front=-1;
		Q.rear=-1
	}
	void insert(int item);
	void del();
	void display();
}

void Queue::insert(int item)
{
	if(Q.front=Q.rear=-1)
	{
		cout<<"empty queue";
	}
	else
	{
		Q.rear++;
		Q.q.[rear]=item;
	}
}

void Queue::del(int item)
{
	int ele;
	if(Q.front=Q.rear=-1 || Q.front>Q.rear)
	{
		cout<<"empty queue";
	}
	else
	{
		ele=Q.q[Q.front];
		Q.front++;
		cout<<"delete element ="+ele;	
	}
}
void Queue::display()
{
	int i;
	if(Q.front=Q.rear=-1 ||Q.front>Q.rear)
	{
		cout<<"empty queue";
	}
	else{
		for(i=Q.front;i<Q.rear;i++)
		{
			cout<<Q.q[i];
		}
	}	
}

int main()
{
	int ch;
	Queue x;
	int item;

	do{
		cout<<"enter your choice \n1.insert \n2.delete \n3.display";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
					cout<<"enter element";
					cin>>item;
					x.insert(item);
					break;
			case 2:x.del();
					break;
			case 3:x.display();
					break;
			default:
			 return 0;
		}
	}while(ch!=4);
	
}