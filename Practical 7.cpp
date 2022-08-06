// Aim: Write a menu driven program for stack contain following function

#include<iostream>
// #include<conio.h>
using namespace std;
class Stack
{
  int top;
  int arr[50];
  public:
    Stack()
    {
      top=-1;
    }
    void push();
    void pop();
    void peek();
    int isEmpty();
    int isFull();
    void display();
};
int Stack::isEmpty()
{
  return (top == (-1) ? 1 : 0);
}
int Stack::isFull()
{
  return (top == 50 ? 1 : 0);
}
void Stack::push()
{
  if(isFull())
  {
    cout<<"\nSTACK IS FULL - OVERFLOW\n";
  }
  else
  {
    int i;
    cout<<"\nEnter an element : ";
    cin >> i;
    ++top;
    arr[top] = i;
    cout<<"Insertion successful\n";
  }
}
void Stack::pop()
{
  int num;
  if(isEmpty())
  {
    cout<<"\nSTACK IS EMPTY - UNDERFLOW\n";
  }
  else
  {
    cout<<"\nDeleted element is "<<arr[top]<<"\n";
    top--;
  }
}
void Stack::peek()
{
  if(top == -1)
  {
    cout<<"\nSTACK IS EMPTY\n";
  }
  else
  {
    cout<<"\nThe topmost element of the stack is " <<arr[top]<<"\n";
  }
}
void Stack::display()
{
  if(isEmpty())
  {
    cout<<"\nSTACK IS EMPTY\n";
  }
  else
  {
    cout<<"\nStack : ";
    for(int i = top; i >= 0; i--)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  //clrscr();
  Stack s;
  int ch;
  ch = 0;
  while(ch != 5)
  {
    cout<<"\n1.Push\n";
    cout<<"2.Pop\n";
    cout<<"3.Peek\n";
    cout<<"4.Display\n";
    cout<<"5.Exit\n";
    cout<<"\nEnter your choice : ";
    cin>>ch;
    switch(ch)
    {
      case 1 : s.push();
             break;
      case 2 : s.pop();
             break;
      case 3 : s.peek();
             break;
      case 4 : s.display();
             break;
      
      case 5 : cout<<"\nExit";
                   break;
      default: cout<<"\nInvalid choice!\n";
             break;
    }
  }
 // getch();
}
