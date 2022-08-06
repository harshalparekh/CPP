#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10], n, i, x, count = 0, first = 0;
  cout<<"\nEnter 10 elements\n";
  for(i = 0; i < 10; i++)
  {
    cin>>a[i];
  }
  cout<<"\nEnter the element to be searched : ";
  cin>>x;
  for(i = 0; i < 10; i++)
  {
    if(a[i] == x)
    {
      if(count == 0)
      {
	first = i;
      }
      count++;
    }
  }
  if(count == 0)
  {
    cout<<"\nElement not found";
  }
  else
  {
    cout<<"\nThe first occurrence of " << x << " is at position " << first << "\n";
    cout<<"Number of occurrence = " << count;
  }
  getch();
}
