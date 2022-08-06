#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
class Stack
{
private:
	int top;
	int arr[5];
public:
	Stack()
	{
	   top=-1;
	   //array initialization
	  arr[0]= 0;
	  arr[1]= 0;
	  arr[2]= 0;
	  arr[3]= 0;
	  arr[4]= 0;
	}
//   class does not end here};
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



//int peek(int pos)
//peek always return top value
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
/* not part of stack function essential
void change(int pos,int val)
 {
   arr[pos]=val;
   cout<<"Value changed at location: "<<pos<<endl;
 }


 */


void display()
  {
    cout<<"All values in the stack are: "<<endl;
    for(int i=4;i>=0;i--)
     {
      cout<<arr[i]<<endl;
     }
  }


};

void main()
{
clrscr();
  line
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


       <<"\n8. Display()\n";
   //not essemtial    <<"\n9. Clear Screen"<<endl;


cin>>option;

switch(option)
 {
   case 1:
    cout<<"Enter an item to push in the stack"<<endl;
    cin>>value;
    s1.push(value);
    getch();
    break;

   case 2:
	    cout<<"Pop function called - Poped value:"<<s1.pop()<<endl;
    getch();
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
    // cout<<"Enter position of item you want to peek: "<<endl;
     //cin>>position;

     cout<<"Peek function called - Value at top position "<<"is "<<s1.peek()<<endl;
     getch();
     break;

   case 6:
     cout<<"Count Function called - Number of item in the stack are: "<<s1.count()<<endl;
     getch();
     break;



    /*  this function does not exist
   case 7:
     cout<<"Change Function called - "<<endl;
     cout<<"Enter position of item you want to change: ";
     cin>>position;
     cout<<endl;
     cout<<"Enter value of item you want to change: ";
     cin>>value;
     s1.change(position,value);
     break;
	   */


   case 8:
    cout<<"Display Function called- "<<endl;
    s1.display();getch();
    break;

  // case 9:
   // system("cls");
    //break;

   default:
   cout<<"Enter proper option number "<<endl;
 }
 system("cls");
}while(option!=0);


getch();
}




