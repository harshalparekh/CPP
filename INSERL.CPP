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



int main(){
	 clrscr();
	 cout<<"Single Linked List\n";
    display();
    getch();
    cout<<"Insert Element 10\n";
    insertNode(10);
    getch();
    display();

	cout<<"Insert Element 20\n";
	insertNode(20);
	getch();
	display();
	getch();
    insertNode(30);
    insertNode(40);
    insertNode(50);
    getch();
    display();
    getch();
    insertNodeL(5);
    getch();
    display();
    getch();
insertNodeL(15);
    getch();
    display();
    getch();
    
    return 0;
}