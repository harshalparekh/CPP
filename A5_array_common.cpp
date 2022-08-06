#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[20], b[3], i, j, count = 0;
  cout<<"\nFirst array\n";
  for(i = 0; i < 20; i++)
  {
    cin>>a[i];
  }
  cout<<"\nSecond array\n";
  for(j = 0; j < 3; j++)
  {
    cin>>b[j];
  }
  for(i = 0; i < 20; i++)
  {
    for(j = 0; j < 3; j++)
    {
      if(a[i] == b[j])
      {
	count++;
	cout<<"\nThe common elements are ";
	cout<<a[i]<<" ";
      }
    }
  }
  if(count == 0)
    cout<<"\nNo common elements found";

 getch();
}
