#include<iostream.h>
#include<conio.h>
int i, j;
void sparse_matrix(int a[10][10], int m, int n);
void square_matrix(int m, int n);
void diagonal_matrix(int a[10][10], int m, int n);
void lowertriangular_matrix(int a[10][10], int m, int n);
void uppertriangular_matrix(int a[10][10], int m, int n);
void tridiagonal_matrix(int a[10][10], int m, int n);
void main()
{
  clrscr();
  int a[10][10], m, n;
  cout<<"\nEnter no.of rows and columns of the matrix : ";
  cin>>m>>n;
  cout<<"\nEnter matrix elements\n";
  for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
      cin>>a[i][j];
  sparse_matrix(a,m,n);
  square_matrix(m,n);
  diagonal_matrix(a,m,n);
  lowertriangular_matrix(a,m,n);
  uppertriangular_matrix(a,m,n);
  tridiagonal_matrix(a,m,n);
  getch();
}
void sparse_matrix(int a[10][10], int m, int n)
{
  int k = 0, c = 0, b[3][10];
  for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
      if(a[i][j] != 0)
      {
	c++;
	b[0][k] = i;
	b[1][k] = j;
	b[2][k] = a[i][j];
	k++;
      }
  cout<<"\nSparse matrix\n";
  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < c; j++)
      cout<<b[i][j]<<" ";
    cout<<endl;
  }
}
void square_matrix(int m, int n)
{
  if(m == n)
    cout<<"\nIt is a square matrix\n";
  else
    cout<<"\nIt is not a square matrix\n";
}
void diagonal_matrix(int a[10][10] ,int m, int n)
{
  int flag = 0;
  if(m == n)
  {
    for(i = 0; i < m; i++)
      for(j = 0; j < n; j++)
	if(i != j && a[i][j] != 0)
	{
	  flag = 1;
	  break;
	}
    if(flag == 0)
      cout<<"\nIt is a diagonal matrix\n";
    else
      cout<<"\nIt is not a diagonal matrix\n";
  }
  else
    cout<<"\nIt is not a diagonal matrix\n";
}
void lowertriangular_matrix(int a[10][10], int m, int n)
{
  int flag = 0;
  if(m == n)
  {
    for(i = 0; i < m; i++)
      for(j = 0; j < n; j++)
	if(i < j && a[i][j] != 0)
	{
	  flag = 1;
	  break;
	}
    if(flag == 0)
      cout<<"\nIt is a lower triangular matrix\n";
    else
      cout<<"\nIt is not a lower triangular matrix\n";
  }
  else
    cout<<"\nIt is not a lower triangular matrix\n";
}
void uppertriangular_matrix(int a[10][10] ,int m, int n)
{
  int flag = 0;
  if(m == n)
  {
    for(i = 0; i < m; i++)
      for(j = 0; j < n; j++)
	if(i > j && a[i][j] != 0)
	{
	  flag = 1;
	  break;
	}
    if(flag == 0)
      cout<<"\nIt is a upper triangular matrix\n";
    else
      cout<<"\nIt is not a upper triangular matrix\n";
  }
  else
    cout<<"\nIt is not a upper triangular matrix\n";
}
void tridiagonal_matrix(int a[10][10], int m, int n)
{
  int flag = 0;
  if(m == n)
  {
    for(i = 0; i <= m-3; i++)
      for(j = i+2; j < n; j++)
	if(a[i][j] != 0)
	{
	  flag = 1;
	  break;
	}
      for(i = 2; i < m; i++)
	for(j = 0; j < i-1; j++)
	  if(a[i][j] != 0)
	  {
	    flag = 1;
	    break;
	  }
    if(flag == 0)
      cout<<"\nIt is a tridiagonal matrix\n";
    else
      cout<<"\nIt is a not a tridiagonal matrix\n";
  }
  else
    cout<<"\nIt is not a tridiagonal matrix\n";
}







