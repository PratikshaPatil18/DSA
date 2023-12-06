// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;
typedef struct student
{
    int roll_no;
    char name[20];
    float marks;
}stu;

void create(stu s[20],int n);
void display(stu s[20],int n);
void bubble_sort(stu s[20],int n);
void insertion_sort(stu s[20],int n);
void search(stu s[20],int n ,int key);
int binary_search(stu s[20],char [],int ,int);

int main() {
     stu s[20];
    int ch,key,n,res;
    char x[20];
    do{
        cout<<"\n1.create \n2.display \n3.bubble_sort \n4.insertion_sort \n5.linear search \n6.binary search \n enter your choice =";
        cin>>ch;
        
        switch(ch)
        {
            case 1:
            cout<<"enter number of records";
            cin>>n;
            create(s,n);
            break;
            case 2:
            display(s,n);
            break;
            case 3:
            bubble_sort(s,n);
            break;
            case 4:
            insertion_sort(s,n);
            break;
            case 5:
            cout<<"enter roll no to search = ";
            cin>>key;
            search(s,n,key);
            break;
            case 6:
            cout<<"enter name to search =";
            cin>>x;
            if(res==1)
            {
                cout<<"record found";
            }else{
                cout<<"record not found";
            }
           binary_search(s,x,0,n-1);
            
            break;
            default:cout<<"wrong choice";
        }
    }while(ch!=7);
}
void create(stu s[20],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"enter student name =";
        cin>>s[i].name;
        cout<<"enter roll no =";
        cin>>s[i].roll_no;
        cout<<"enter student marks =";
        cin>>s[i].marks;
    }
}
void display(stu s[20],int n)
{
    for(int i=0;i<n;i++)
    {
       
        cout<<"\n";
        cout<<s[i].roll_no<<"  "<<s[i].name<<"  "<<s[i].marks;
    }
}
void bubble_sort(stu s[20],int n)
{
    int i,j=0;
    stu temp;
    for(i=1;i<n;i++)
    {
         for(j=0;j<=n;j++)
         {
             if(s[j].roll_no>s[j+1].roll_no)
             {
                 temp=s[j];
                 s[j]=s[j+1];
                 s[j+1]=s[j];
             }
         }
    }
}

void insertion_sort(stu s[20],int n)
{
    stu key;
    int i,j;
    
    for(i=1;i<n;i++)
    {
        key=s[i];
        j=i-1;
        while(j>=0 && strcmp(s[j].name,key.name)>0)
        {
            s[j+1]=s[j];
            j=j-1;
        }s[j+1]=key;
    }
}

void search(stu s[20],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==s[i].marks)
        {
            cout<<s[i].roll_no<<"  "<< s[i].name<<" "<<s[i].marks;
        }
    }
}
int binary_search(stu s[20],char x[],int low,int high)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(strcmp(x,s[mid].name)==0)
        {
             return mid;
        }
        else if(strcmp(x,s[mid].name)<0)
        {
          high=mid-1;
        }else{
            low=mid+1;
        }
        return -1;
    }
}







