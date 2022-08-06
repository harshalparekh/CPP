#include<iostream.h>
#include<conio.h>


//Declare Node
struct Node{
    int num;
    Node *next;
};

//Declare starting (Head) node
struct Node *head=NULL;

//Insert node at start
void insertNode(int n){
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

int main(){
	 clrscr();

    display();
    insertNode(10);
    insertNode(20);
    insertNode(30);
    insertNode(40);
    insertNode(50);
    getch();
    display();
    insertNodeM(45);
    getch();
    display();
    getch();
    return 0;
}