//read information and display using single linked list
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//Declare Node
struct Node{
    int num;
    char name[20],city[20],course[20];

    Node *next;
};

//Declare starting (Head) node

struct Node *head=NULL;
//Insert node at start
void create()
{

    struct Node *newNode;
    int ch,n;
    cout<<"Do u want to insert Node:\t";
    cin>>ch;
    while(ch==1)
    {
    newNode=new Node;

    cout<<"Enter roll no :\t";
    cin>>newNode->num;
    cout<<"Enter name :\t";
    cin>>newNode->name;
    cout<<"Enter city :\t";
    cin>>newNode->city;
    cout<<"Enter course :\t";
    cin>>newNode->course;
    newNode->next=head;
    head=newNode;
    cout<<"Do u want to insert one more nod :\t";
    cin>>ch;
    }


}



//Traverse/ display all nodes (print items)
void display(){
    if(head==NULL){
	cout<<"List is empty!"<<endl;
	return;
    }
    struct Node *temp=head;
    cout<<"-----------------------------------\n";
    cout<<"Rollno\tName\tCity\tCourse\n";
    cout<<"-----------------------------------\n";
    while(temp!=NULL){
	cout<<"\n"<<temp->num<<" \t"<<temp->name<<"\t"<<temp->city<<"\t"<<temp->course;
	temp=temp->next;
    }
    cout<<endl;
}

int main()
{
	 clrscr();
	 int ch;
	 cout<<"Create List\n";
	 create();
	 display();
	 getch();

    return 0;
}