#include<iostream>
using namespace std;

class Astack
{
 int top;
 int A[10]
 public Astack()
 {
  top==-1;
 }
 void push();
 void pop();
 void display();
}

void Astack::push()
{
 int ele;
 cout<<"enter element=";
 cin>>ele;
 
 if(top==9) //top==n-1
 {
  cout<<"overflow";
 }
 else{
 top++;
 A[top]=ele;
 }
}

void Astack::pop()
{
 if (top==-1) //empty
 {
  cout<<"underflow";
 }
 else{
 top--;
 }
}

void Astack::display()
{
int i;
 if(top==-1)
 {
  cout<<"underflow";
 }
 else{
 i=0;
 while(i<=top)
 {
  cout<<A[i];
  i++;
 }
}

int main()
{
 int ch;
 Astack a;
 
 cout<<"*****Stack Impletation using ArrayList*****";
 do{
	cout<<"enter your choice \n1.push \n2.pop \n3.display \n4.exit";
	cin>>ch;
	Switch(ch)
	{
		case 1:a.push();
				break;
		case 2:a.pop();
				break;
		case 3:a.display();
				break;
		case 4:cout<<"exit";
				break;
		default: cout<<"wrong choice";
		
	}
   }while(ch!=5);
}