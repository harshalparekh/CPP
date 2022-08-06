#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[50], n, i, j, temp;
  cout<<"\nEnter number of elements : ";
  cin>>n;
  cout<<"\nEnter elements\n";
  for(i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  for(i = 1; i < n; i++)
  {
    for(j = i; j > 0; j--)
    {
      if(a[j] < a[j-1])
      {
	temp = a[j];
	a[j] = a[j-1];
	a[j-1] = temp;
      }
      else
	break;
    }
  }
  cout<<"\nAfter sorting\n";
  for(i = 0; i < n; i++)
  {
    cout<<a[i]<<"\n";
  }


getch();
}
