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
void insertNodeB(int n){
    struct Node *newNode=new Node;
    newNode->num=n;
    newNode->next=head;
    head=newNode;
}



 void insertNodeL(int n)
 {
 if(head==NULL){
	cout<<"List is empty!"<<endl;
	return;
    }
    struct Node *temp=head;
    while(temp!=NULL){
	cout<<temp->num<<" ";
	temp=temp->next;
    }
     struct Node *newNode=new Node;
    newNode->num=n;
    newNode->next=NULL;
    temp=newNode;
    cout<<endl;


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
	cout<<temp->num<<" ";
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

//delete node from start
void deleteItem(){
    if(head==NULL){
	cout<<"List is empty!"<<endl;
	return;
    }
    cout<<head->num<<" is removed."<<endl;
    head=head->next;
}
int main(){
	 clrscr();
	 cout<<"Single Linked List\n";
    display();
    getch();
    cout<<"Insert Element 10\n";
    insertNodeB(10);
    getch();
    display();

	cout<<"Insert Element 20\n";
	insertNodeB(20);
	getch();
	display();
	getch();
    insertNodeB(30);
    insertNodeB(40);
    insertNodeB(50);
    getch();
    display();
    getch();
    insertNodeL(5);
    getch();
    display();
    getch();

    /*
    search();
    getch();

 deleteItem(); getch();
 deleteItem(); getch();
 deleteItem(); getch();
 deleteItem(); getch();
 deleteItem(); getch();
   deleteItem();getch();;
    display();        */
    return 0;
}