#include<iostream.h>
#include<conio.h>
void main ()
{
  int quiz,midterm,final;    
  double per,total;
  clrscr();
  
  cout<<"Enter marks of quiz out of 100: ";
  cin>>quiz;
  cout<<"Enter marks of midterm out of 100: ";
  cin>>midterm;
  cout<<"Enter marks of final out of 100: ";
  cin>>final;
  
  total=quiz+midterm+final;
  per=(total/300)*100;
  
  cout<<"Total: "<<total;
  
  if(per>90)
  {
  cout<<"\nYour grade is:A "<<per<<"%";
  }
  else if(per>=70 && per<90)
  {
  cout<<"\nYour grade is:B "<<per<<"%";
  }
  else if(per>=50 && per<70)
  {
  cout<<"\nYour grade is:C "<<per<<"%";
  }
  else
  {
  cout<<"\nYour grade is:F"<<per<<"%";
  }
  getch ();
}
