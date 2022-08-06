/* C++ implementation to convert infix expression to postfix*/
// Note that here we use std::stack for Stack operations 
#include<iostream.h> 
 #include<conio.h>
class Stack
{
private:
	int top;
	int arr[5];
public:
       void display();
       Stack();



int isEmpty()
   {
     if(top==-1)
      return 1;
     else
      return 0;
   }
int isFull()
   {
     if(top==4)
      return 1;
     else
      return 0;
   }

void push(int val)
  {
    if(isFull())
     {
      cout<<"Stack Overflow"<<endl;
     }
    else
     {
      top++;
      arr[top]=val;
     }
   }

int pop()
 {
  if(isEmpty())
    {
      cout<<"Stack Underflow"<<endl;
      return 0;
    }
  else
    {
     int popValue=arr[top];
     arr[top]=0;
     top--;
     return popValue;
    }
  }

int count()
   {
     return(top+1);
   }


int peek()
 {
  if(isEmpty())
   {
     cout<<"Stack Underflow"<<endl;
     return 0;
   }
  else
   {
    return arr[top];
   }
 }




};


void Stack:: display()
  {
    cout<<"All values in the stack are: "<<endl;
    for(int i=4;i>=0;i--)
     {
      cout<<arr[i]<<endl;
     }
  }



Stack::Stack()
	{
	   top=-1;
	   for(int i=0;i<5;i++)
	     {
	       arr[i]=0;
	     }
	   }


//Function to return precedence of operators 
int prec(char c) 
{ 
	if(c == '^') 
	return 3; 
	else if(c == '*' || c == '/') 
	return 2; 
	else if(c == '+' || c == '-') 
	return 1; 
	else
	return -1; 
} 

// The main function to convert infix expression 
//to postfix expression 
void infixToPostfix(string s) 
{ 
	Stack st; 
	st.push('N'); 
	int l = s.length(); 
	string ns; 
	for(int i = 0; i < l; i++) 
	{ 
		// If the scanned character is an operand, add it to output string. 
		if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
		ns+=s[i]; 

		// If the scanned character is an ‘(‘, push it to the stack. 
		else if(s[i] == '(') 
		
		st.push('('); 
		
		// If the scanned character is an ‘)’, pop and to output string from the stack 
		// until an ‘(‘ is encountered. 
		else if(s[i] == ')') 
		{ 
			while(st.top() != 'N' && st.top() != '(') 
			{ 
				char c = st.top(); 
				st.pop(); 
			ns += c; 
			} 
			if(st.top() == '(') 
			{ 
				char c = st.top(); 
				st.pop(); 
			} 
		} 
		
		//If an operator is scanned 
		else{ 
			while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
			{ 
				char c = st.top(); 
				st.pop(); 
				ns += c; 
			} 
			st.push(s[i]); 
		} 

	} 
	//Pop all the remaining elements from the stack 
	while(st.top() != 'N') 
	{ 
		char c = st.top(); 
		st.pop(); 
		ns += c; 
	} 
	
	cout << ns << endl; 

} 

//Driver program to test above functions 
int main() 
{ 
	string exp = "a+b*(c^d-e)^(f+g*h)-i"; 
	infixToPostfix(exp); 
	return 0; 
} 
// This code is contributed by Gautam Singh 
