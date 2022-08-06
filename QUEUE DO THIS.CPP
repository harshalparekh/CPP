#include<iostream>
using namespace std;

    int front=-1, rear=-1, arr[15];
    
    
    void insert()
    {
        int x;
        cout<<"Enter the element you want to insert : ";
        cin>>x;
        if(front==14)
        {
            cout<<"\nOverflow";
        }
        else if(front==-1 && rear==-1)
        {
            front++;
            rear++;
            arr[rear]=x;
            cout<<"\nElement entered successfully";
        }
        else
        {
            rear++;
            arr[rear]=x;
            cout<<"\nElement entered successfully";
        }
    }
    
    
    void deque()
    {
        if(front==-1 && rear==-1)
        {
            cout<<"\nunderflow";
        }
        else if(front == rear)
        {
            rear=-1;
            front=-1;
        }
        else
        {
            cout<<"\nElement deleted successfully" <<arr[front];
            front++;
        }
    }
    
    
    void display()
    {
        int i;
        if(front==-1 && rear==-1)
        {
            cout<<"Queue is empty";
        }
        else
        {
            cout<<"Queue is as follows:\n";
            for(i=front;i<rear+1; i++)
            {
                cout << arr[i];
            }
        }
    }


int main()
{
    int ch;
    do{
        cout<<"\n\n1.Enque\n2.Deque\n3.Display\n4.Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:insert();
        break;
            case 2:deque();
        break;
            case 3:display();
        break;
    case 4: cout<<"Exit";
        break;
            default:cout<<"Invalid choice";
        }
    } while(ch!=4);
}
