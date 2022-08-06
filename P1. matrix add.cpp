// PRACTICAL 1 : ADDITION OF A MATRIX

// ADDITION :-

#include <iostream>
//#include<conio.h>
using namespace std;
int main()
{
//    clrscr();
    int r, c, a[10][10], b[10][10], sum[10][10], i, j;
    cout << "Enter number of rows (between 1 and 10): ";
    cin >> r;
    cout << "Enter number of columns (between 1 and 10): ";
    cin >> c;
    cout << endl << "Enter elements of 1st matrix: " << endl;
    // Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
       cout << "Enter elements A" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element B" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)  // what's this line for ? 
                cout << endl;
        }
// getch();
    return 0;
}
