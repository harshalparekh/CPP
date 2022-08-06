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

void deleteNodeB()
{
    head=head->next;
}






//insertion in the middle
void deleteNodeM()
{
    int sitem,found=0;
      struct Node *prev,*nextNode;
    cout<<"which element you want to delete\n";
    cin>>sitem;
   if(head==NULL){
	cout<<"List is empty!"<<endl;
	return;
    }
    struct Node *temp=head;

    while(temp!=NULL)
    {

	if (sitem==temp->num)
	{
	found=1;
	 prev=prev;//previous node
	 nextNode=temp->next;//next node of current node
	break;
	}
	prev=temp;   //current element will become previous
	temp=temp->next; //next element as current element
	nextNode=temp->next; //next node of current element
	 }

     if (found==1)
     {
    cout<<"\nsearch is successful\n";

   // cout<<"PPPPPPPPPPPPPP  "<<prev->num;
   // cout<<"cccccccccccccccc  "<<temp->num;
     //	cout<<"nnnnnnnnnnnnnnnn  "<<nextNode->num;
    prev->next=temp->next;

    }
    else
    cout<<"\nsearch is umsuccessful";
    cout<<endl;
}



//delete node at last in single linked list
 void deleteNodeL()
 {
struct Node *temp=head,*prev=head;

if(head==NULL){
	cout<<"List is empty!"<<endl;
	return;
    }

    while(temp->next!=NULL){
	prev=temp;  // stores previous node address
	temp=temp->next;
    }
    prev->next=NULL;
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
	 cout<<"Create List\n";
	 create();
	 display();
	 getch();
	 /*
	 deleteNodeB();
	 display();
	 getch();
	 deleteNodeL();
	 display();
	 getch();

	  deleteNodeM();
	  display();
	  getch();
	 */
	 cout<<"Single Linked list deletion Operations\n\n";
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


		switch(opt)
		{
		 case 1: deleteNodeB();display();break;
		 case 2: deleteNodeM();display();break;
		 case 3: deleteNodeL();display();break;
		 default: exit(0);
		}

	 cout<<"Do u want to continue (1-continue : 0-End)";
	 cin>>ch;

	 }



    return 0;
}