#include<iostream>
using namespace std;
//#include<conio.h>
int main ()
{
//clrscr();
  int n, a[10], i;
  void isort (int[10], int);	// func declaration
  cout << "Enter the size of the array:";
  cin >> n;
  cout << "Enter array elements:\n";
  for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  cout << "\nBefore sorting:\n";
  for (i = 0; i < n; i++)
    {
      cout << "\n" << a[i];
    }
  isort (a, n);	// func call
//getch();
}

void isort (int a[10], int n)	// func defination
{
  int temp, j;
  for (int i = 1; i < n; i++)
    {
      temp = a[i];
      j = i - 1;
      while (j >= 0 && a[j] > temp)
	{
	  a[j + 1] = a[j];
	  j--;
	}
      a[j + 1] = temp;
    }
  cout << "\nAfter sorting:\n";
  for (int i = 0; i < n; i++)
    {
      cout << "\n" << a[i];
    }
}
