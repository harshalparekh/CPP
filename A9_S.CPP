#include<iostream.h>
#include<conio.h>
#include<stdlib.h>


//Declare Node
struct Node{
    int num;
    Node *next;
};

//Declare starting (Head) node
struct Node *head=NULL;

//Insert node at start
void create()
{
    struct Node *newNode;
    int ch,n;
    cout<<"Do u want to insert element:\t";
    cin>>ch;
    while(ch==1)
    {
    cout<<"Enter element for inerting\n";
    cin>>n;
    newNode=new Node;
    newNode->num=n;
    newNode->next=head;
    head=newNode;
	cout<<"Do u want to insert element:\t";
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
    while(temp!=NULL){
	cout<<temp->num<<" ";
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