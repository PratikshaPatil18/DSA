// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define SIZE 5

class Queue
{
    private:
    int item[SIZE],front,rear;
    
    public:
    Queue()
    {
        front=-1;
        rear=-1;
    }
    bool isfull()
    {
        if(front==0 && rear==SIZE-1)
            return 1;
        else if(front==rear+1)
            return 1;
        return 0;
    }
    bool isempty()
    {
        if(front==-1)
            return 1;
        return 0;
    }
    void enqueue(int element)
    {
        if(isfull())
        {
            cout<<"overflow";
        }else{
            if(front==-1)
            front=0;
            rear=(rear+1)%SIZE;
            item[rear]=element;
        }
    }
    void dequeue()
    {
        if(isempty())
        {
            cout<<"underflow";
        }else
        {
            if(front==rear)
            {
                front==rear==-1;
            }else{
                int ele=item[front];
                front=(front+1)%SIZE;
                cout<<ele;
            }
        }
    }
    void display()
    {
        if(isempty())
        {
            cout<<"overflow";
        }else
        {
            int i;
            for(i=front;i!=rear;i=(i+1)%SIZE)
            {
                cout<<item[i];
            }
        }
    }
};
int main()
{
  Queue q;
  q.enqueue(2);
  q.enqueue(6);
  q.enqueue(2);
  cout<<" inserted elements = ";
  q.display();
  
  q.dequeue();
  cout<<" \nafter dequeue elements = ";
  q.display();
  
}