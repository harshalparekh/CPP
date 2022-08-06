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
void insertNodeB(int n)
{
    struct Node *newNode=new Node;
    newNode->num=n;
    newNode->next=head;
    head=newNode;
}

//insertion in the middle
void insertNodeM(int n)
{
    int sitem,found=0;
     struct Node *newNode=new Node;
    newNode->num=n;

    cout<<"After which element you want to insert\n";
    cin>>sitem;


    if(head==NULL){
	cout<<"List is empty!"<<endl;
	return;
    }
    struct Node *temp=head;
    while(temp!=NULL)
    {
       //	cout<<temp->num<<" ";
	if (sitem==temp->num)
	{
	found=1;

	break;
	}

	temp=temp->next;
    }

     if (found==1)
     {
    cout<<"\nsearch is successful";
    newNode->next=temp->next;
     temp->next=newNode;

    }
    else
    cout<<"\nsearch is umsuccessful";


    cout<<endl;
}



//insert node at last
 void insertNodeL(int n)
 {
struct Node *temp=head,*prev;
struct Node *newNode=new Node;
	newNode->num=n;
	newNode->next=NULL;

if(head==NULL){
	cout<<"Insertion in the last \nList is empty!"<<endl;
	 head=newNode;
	return;
    }

    while(temp!=NULL){
	prev=temp;
	temp=temp->next;
    }

    prev->next=newNode;
    cout<<endl;


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
	 cout<<"Single Linked list Insertion Operations\n\n";
	 cout<<"1: Begining\n";
	 cout<<"2: Middle\n";
	 cout<<"3: Last\n";
	 cout<<"4: Exit\n\n";
	 cout<<"Do u want to continue (1-continue : 0-End)";
	 cin>>ch;
	 int opt,item;
	 while(ch==1)
	 {
		cout<<"Enter which operation\n";
	 cin>>opt;
		cout<<"Enter element for insertion\n";
		cin>>item;

		switch(opt)
		{
		 case 1: insertNodeB(item);display();break;
		 case 2: insertNodeM(item);display();break;
		 case 3: insertNodeL(item);display();break;
		 default: exit(0);
		}

	 cout<<"Do u want to continue (1-continue : 0-End)";
	 cin>>ch;

	 }



    return 0;
}