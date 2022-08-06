
//Queue Implementation Using Array
#include<iostream.h>
#include<conio.h>

template <class T>
class linearQueue   //Base class
{
protected:
    T *arr, x;
    int i, size, front, rear, cnt; //cnt - a counter to count no.of elements in the queue

public:
     /*
    *Initializes value of front,rear & cnt.
    *Takes array size as user input
    *Assigns array size dynamically to the array.
    */
    linearQueue()
    {
	cnt = 0;
	front = rear = -1;
	cout<<"\nEnter size of queue : ";
	cin>>size;
	arr = new T(size);
    }

    //Frees memory used by the queue
    ~linearQueue()
    {
	delete[] arr;
    }

    //Adds an element in the queue
    void linear_enqueue()
    {
	if (linear_isFull())
		cout<<"Queue Overflow\n";
	else
	{
		if (front == - 1)
			front = 0;
		cout<<"Enter data : ";
		cin>>x;
		rear++;
		arr[rear] = x;
		cnt++;
	}
    }

    //Removes an element from the queue
    void linear_dequeue()
    {
	if (linear_isEmpty())
		cout<<"Queue Underflow\n";
	else if (front == rear)
	{
		cout<<"The deleted element is "<<arr[front]<<endl;
		front = rear = -1;
		cnt--;
	}
	else
	{
		cout<<"The deleted element is " <<arr[front]<<endl;
		front++;
		cnt--;

	}
    }

    //Returns top element of queue without deleting it
    void linear_peek()
    {
	if (linear_isEmpty())
		cout<<"Queue is empty\n";
	else
		cout<<"The topmost element of the queue is "<<arr[front]<<endl;
    }

    //Checks if queue is empty.Returns true (i.e. 1) if queue is empty
    int linear_isEmpty()
    {
	return (front == -1 && rear == -1 ? 1 : 0);
    }

    //Checks if queue is full.Returns true (i.e. 1) if queue is full
    int linear_isFull()
    {
	return (rear == size - 1 ? 1 : 0);
    }

    //Returns the current no.of elements in the queue
    void linear_queueSize()
    {
		cout<<"The current number of elements in the queue is "<<cnt<<endl;
    }

    //Displays all elements in the queue
    void linear_printQueue();
};

template <class T>
void linearQueue<T>::linear_printQueue()
{
	if (linear_isEmpty())
		cout<<"Queue is []\n";
	else
	{
		cout<<"The Queue is [";
		for (i = front; i <= rear - 1; i++)
			cout<<arr[i]<<",";
		cout<<arr[rear]<<"]\n";
	}
}

template <class T>
class circularQueue:public linearQueue<T>  //Derived class
{
public:
    //Adds an element in the queue
     void circular_enqueue()
     {
	if (circular_isFull())
		cout<<"Queue Overflow\n";
	else if (circular_isEmpty())
	{
		front = rear = 0;
		cout<<"Enter data : ";
		cin>>x;
		arr[rear] = x;
		cnt++;
	}
	else
	{
		cout<<"Enter data : ";
		cin>>x;
		rear = (rear + 1) % size;
		arr[rear] = x;
		cnt++;
	}
     }

     //Removes an element from the queue
      void circular_dequeue()
      {
	if (circular_isEmpty())
		cout<<"Queue Underflow\n";
	else if (front == rear)
	{
		cout<<"The deleted element is "<<arr[front]<<endl;
		front = rear = -1;
		cnt--;
	}
	else
	{
		cout<<"The deleted element is " <<arr[front]<<endl;
		front = (front + 1) % size;
		cnt--;
	}
      }

      //Returns top element of queue without deleting it
      void circular_peek()
      {
	linearQueue<T>::linear_peek();
      }

      //Checks if queue is empty.Returns true (i.e. 1) if queue is empty
      int circular_isEmpty()
      {
	return linearQueue<T>::linear_isEmpty();
      }

      //Checks if queue is full.Returns true (i.e. 1) if queue is full
      int circular_isFull()
      {
	return ((rear + 1) % size == front ? 1 : 0);
      }

      //Returns the current no.of elements in the queue
      void circular_queueSize()
      {
	linearQueue<T>::linear_queueSize();
      }

      //Displays all elements in the queue
      void circular_printQueue();
};

template <class T>
void circularQueue<T>::circular_printQueue()
{
	if (circular_isEmpty())
		cout<<"Queue is []\n";
	else
	{
		cout<<"Queue is [";
		i = front;
		while (i != rear)
		{
			cout<<arr[i]<<",";
			i = (i+1) % size;
		}
		cout<<arr[rear]<<"]\n";
	}
}

int main()
{
    int ch1, ch2;
    clrscr();
    cout<<"\nQUEUE\n";
    cout<<"\n1.Linear Queue\n2.Circular Queue\n";
    cout<<"\nEnter your choice : ";
    cin>>ch1;
    cout<<"\nOPERATIONS\n";
    cout<<"1.Enqueue\n2.Dequeue\n3.Peek\n4.Size\n5.Display\n6.Exit\n";
    circularQueue <int> q;  //Works for datatypes like int, char, float and double.
    do		           //Change <int> to any other type as per requirement.
    {
	cout<<"\nEnter your choice : ";
	cin>>ch2;
	if(ch1 == 1)
	{
		switch (ch2)
		{
			case 1: q.linear_enqueue();
				break;
			case 2: q.linear_dequeue();
				break;
			case 3: q.linear_peek();
				break;
			case 4: q.linear_queueSize();
				break;
			case 5: q.linear_printQueue();
				break;
			default:cout<<"Invalid choice\n";
		}
	}
	if(ch1 == 2)
	{
		switch (ch2)
		{
			case 1: q.circular_enqueue();
				break;
			case 2: q.circular_dequeue();
				break;
			case 3: q.circular_peek();
				break;
			case 4: q.circular_queueSize();
				break;
			case 5: q.circular_printQueue();
				break;
			default:cout<<"Invalid choice\n";
		}
	}
    } while (ch2 != 6);
     getch();
     return 0;
}