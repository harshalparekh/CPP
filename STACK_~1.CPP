#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class Stack
{
private:
	int top;
	int arr[5];
public:
       void display();
       Stack();



int isEmpty()
   {
     if(top==-1)
      return 1;
     else
      return 0;
   }
int isFull()
   {
     if(top==4)
      return 1;
     else
      return 0;
   }

void push(int val)
  {
    if(isFull())
     {
      cout<<"Stack Overflow"<<endl;
     }
    else
     {
      top++;
      arr[top]=val;
     }
   }

int pop()
 {
  if(isEmpty())
    {
      cout<<"Stack Underflow"<<endl;
      return 0;
    }
  else
    {
     int popValue=arr[top];
     arr[top]=0;
     top--;
     return popValue;
    }
  }

int count()
   {
     return(top+1);
   }


int peek()
 {
  if(isEmpty())
   {
     cout<<"Stack Underflow"<<endl;
     return 0;
   }
  else
   {
    return arr[top];
   }
 }




};


void Stack:: display()
  {
    cout<<"All values in the stack are: "<<endl;
    for(int i=4;i>=0;i--)
     {
      cout<<arr[i]<<endl;
     }
  }



Stack::Stack()
	{
	   top=-1;
	   for(int i=0;i<5;i++)
	     {
	       arr[i]=0;
	     }
	   }



void main()
{
clrscr();

  Stack s1;
  int option,position,value;

do
 {
   cout<<"What operation do you want to perform ?\n Select option number.\nEnter 0 to exit."<<endl;
   cout<<"1. Push"

       <<"\n2. Pop"

       <<"\n3. isEmpty()"
       <<"\n4. isFull()"
       <<"\n5. Peek()"
       <<"\n6. Count()"
       <<"\n8. Display()";

cin>>option;

switch(option)
 {
   case 1:
    cout<<"Enter an item to push in the stack"<<endl;
    cin>>value;
    s1.push(value);
    break;

   case 2:
    cout<<"Pop function called - Poped value: "<<s1.pop()<<endl;
    break;

   case 3:
     if(s1.isEmpty())
     cout<<"Stack is Empty"<<endl;
     else
     cout<<"Stack is not Empty"<<endl;
     getch();
     break;

   case 4:
     if(s1.isFull())
     cout<<"Stack is full"<<endl;
     else
     cout<<"Stack is not full"<<endl;
     getch();
     break;

   case 5:

     cout<<"Peek function called"<<s1.peek()<<endl;getch();
     break;

   case 6:
     cout<<"Count Function called - Number of item in the stack are: "<<s1.count()<<endl;
     break;

   case 8:
    cout<<"Display Function called- "<<endl;
    s1.display(); getch();
    break;


   default:
   cout<<"Enter proper option number "<<endl;
 }
system("cls");
}while(option!=0);


getch();
}



