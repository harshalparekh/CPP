#include<iostream>
//#include<conio.h>
using namespace std;
struct Node
{
  int num;
  char name[20], city[20], course[20];
  Node *next;
};
struct Node *head = NULL;
void create()
{
  struct Node *newNode;
  int ch;
  cout<<"\nDo you want to insert node : ";
  cin>>ch;
  while(ch == 1)
  {
    newNode = new Node;
    cout<<"Enter roll no : ";
    cin>>newNode->num;
    cout<<"Enter name : ";
    cin>>newNode->name;
    cout<<"Enter city : ";
    cin>>newNode->city;
    cout<<"Enter course : ";
    cin>>newNode->course;
    newNode->next = head;
    head = newNode;
    cout<<"\nDo you want to insert one more node : ";
    cin>>ch;
  }
}

void display()
{
  if(head == 0)
  {
    cout<<"List is empty!\n";
    return;
  }
  struct Node *temp = head;
  cout<<"_______________________________\n";
  cout<<"\nRollno\tName\tCity\tCourse\n";
  cout<<"_______________________________\n";
  while(temp != NULL)
  {
    cout<<"\n"<<temp->num<<"\t"<<temp->name<<"\t"<<temp->city<<"\t"<<temp->course<<"\n";
    temp = temp->next;
  }
  cout<<endl;
}
int main()
{
 // clrscr();
  cout<<"\nSingly Linked List\n";
  create();
  display();
//  getch();
  return 0;
}
