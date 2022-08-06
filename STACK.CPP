#include<iostream>
//#include<conio.h>
using namespace std;


class stack // makling a class
{ // main class bracket. will end before int main
public:
int top;
int arr[20];
stack() //constructor of class itself
{
top=-1; // mentioning that stack is empty
}
    
    
void enter() //push
{
   int x;
   cout<<"\nEnter the element in stack:\n";
   cin>>x;
   if(top==19)
   {
    cout<<"Overflow\n";
   }
   else
   {
    top++;
    arr[top]=x;
    cout<<"Element entered successfully\n";
   }
}
    
    
void pop()
{
   int item;
   if(top==-1)
   {
    cout<<"Stack Undeflow:\n";
   }
   else
   {
    item=arr[top];
    top--;
    cout<<"The deleted item is\t"<<item;
   }
}
    
    
void display()
{
   if(top==-1)
   {
    cout<<"The stack is empty\n";
   }
   else
   {
    cout<<"The Stack is as follows:\n";
   }
   for(int i=top;i>=0;i--)
   {
    cout<<arr[i]<<"\n";
   }
}
};


int main()
{
int ch;
stack s;
//clrscr();
do{
  cout<<"\n1.Add Element\n2.Pop\n3.Exit\n4.Display";
  cout<<"\nChoose the operation you want to perform;\n";
  cin>>ch;
  switch(ch)
  {
  case 1:s.enter();
   break;
          
  case 2:s.pop();
   break;
          
  case 3:cout<<"\nExit";
          
  case 4:s.display();
   break;
          
  default:cout<<"Invalid option:";
          
  }
}while(ch!=3);
//getch();
}


