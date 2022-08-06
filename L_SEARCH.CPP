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


//search an item in the list
void search()
{
    int sitem,found=0;
    cout<<"Enter an searching item\n";
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
    cout<<"\nsearch is successful";
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
    getch();
    search();
    getch();
    display();
    return 0;
}