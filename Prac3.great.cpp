#include<iostream.h>
#include<conio.h>
void main ()
{
  clrscr();
  int a,b,c;
  
  cout<<"Enter first number: ";
  cin>>a;
  cout<<"Enter second number: ";
  cin>>b;
  cout<<"Enter third number: ";
  cin>>c;
  
  if((a>b) && (a>c))
  {
      cout<<"(A) First number is greater";
  }
  else if ((b>a) && (b>c))
  {
      cout<<"(B) Second number is greater";
  }
  else
  {
      cout<<"(C) Third number is greater";
  }
  
  getch ();
}
