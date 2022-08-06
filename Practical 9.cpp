#include<iostream>
//#include<conio.h>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void insert()
{
  int val;
  if(rear == n-1)
    cout<<"\nQueue Overflow\n";
  else
  {
    if(front == - 1)
      front = 0;
    cout<<"\nInsert the element in queue : ";
    cin>>val;
    rear++;
    queue[rear] = val;
    cout<<"Insertion successful\n";
  }
}
void del()
{
  if(front == - 1 || front > rear)
  {
    cout<<"\nQueue Underflow\n";
    return;
  }
  else if(front == rear)
  {
    cout<<"\nDeleted element is "<<queue[front]<<endl;
    front = rear = -1;
  }
  else
  {
    cout<<"\nDeleted element is "<<queue[front]<<endl;
    front++;
  }
}
void display()
{
  if(front == - 1 && rear == -1)
    cout<<"\nQueue is empty\n";
  else
  {
    cout<<"\nQueue : ";
    for(int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
    cout<<endl;
  }
}
int main()
{
  //clrscr();
  int ch;
  do
  {
    cout<<"\n1.Insertion"<<endl;
    cout<<"2.Deletion"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>ch;
    switch (ch)
    {
      case 1 : insert();
             break;
      case 2 : del();
             break;
      case 3 : display();
             break;
      case 4 : cout<<"\nExit"<<endl;
             break;
      default: cout<<"\nInvalid choice!"<<endl;
             break;
    }
  }while(ch!= 4);
 // getch();
}
