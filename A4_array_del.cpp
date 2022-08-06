#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10], i, j, del, count = 0;
  cout<<"\nEnter 10 elements\n";
  for(i = 0; i < 10; i++)
  {
    cin>>a[i];
  }
  cout<<"\nEnter element to be deleted : ";
  cin>>del;
  for(i = 0; i < 10; i++)
  {
    if(a[i] == del)
    {
      for(j = i; j < 9; j++)
      {
	a[j] = a[j+1];
      }
      count++;
      break;
    }
  }
  if(count == 0)
  {
    cout<<"Element not found ! ";
  }
  else
  {
    cout<<"\nElement deleted !\n";
    cout<<"Now the new array is ";
    for(i = 0; i < 9; i++)
    {
      cout<<a[i]<<" ";
    }
  }
  getch();
}

