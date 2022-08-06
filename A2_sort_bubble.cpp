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
  for(i = 0; i < n-1; i++)
  {
    for(j = 0; j < n-i-1; j++)
    {
      if(a[j] > a[j+1])
      {
	temp = a[j+1];
	a[j+1] = a[j];
	a[j] = temp;
      }
    }
  }
  cout<<"\nAfter sorting\n";
  for(i = 0; i < n; i++)
  {
    cout<<a[i]<<"\n";
  }
  getch();
}

