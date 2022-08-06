#include<iostream>
using namespace std;
//#include<conio.h>
int main ()
{
//clrscr();
  int found = 0, arr[10], n, data;
  cout << "\nEnter the number of elements in an array:\n";
  cin >> n;
  cout << "\nEnter the elements:";
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  cout << "\nEnter the elements to be searched:\n";
  cin >> data;
  for (int i = 0; i < n; i++)
    {
      if (arr[i] == data)
	{
	  cout << "Element is found at location\t" << i;
	  found++;
	  break;
	}
    }
  if (found == 0)
    {
      cout << "The element is not found:";
    }
//getch();
}
