#include<iostream.h>
#include<conio.h>
struct Node
{
  int data;
  Node *next;
};
struct Node *head = NULL, *tail = NULL;
void create()
{
  struct Node *newNode = new Node;
  int n;
  cout<<"\nEnter data : ";
  cin>>n;
  newNode->data = n;
  if(head == 0)
    newNode->next = head = tail = newNode;
  else
  {
    newNode->next = head;
    head = tail->next = newNode;
  }
  cout<<"Element inserted at beginning!\n";
}
void display()
{
  struct Node *currentnode;
  if(head == 0)
  {
    cout<<"\nLinked list is empty!\n";
    return;
  }
  currentnode = head;
  cout<<"\nLinked list is [";
  while(currentnode->next != tail->next)
  {
    cout<<currentnode->data<<",";
    currentnode = currentnode->next;
  }
  cout<<currentnode->data<<"]"<<endl;
}
int main()
{
  clrscr();
  int ch;
  cout<<"\nCircular Linked List\n";
  while(ch != 3)
  {
    cout<<"\n1.Insertion\n2.Display\n3.Exit\n";
    cout<<"\nEnter your choice : ";
    cin>>ch;
    switch(ch)
    {
      case 1 : create();
	         break;
      case 2 : display();
	         break;
      case 3 : cout<<"\nExit\n";
	         break;
      default: cout<<"\nInvalid choice\n";
	         break;
    }
  }
  getch();
  return 0;
}