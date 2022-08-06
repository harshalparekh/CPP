// C++ program to implement recursive Binary Search
#include<iostream.h>
#include<conio.h>
#include<binarySearch.h>

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 2;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;

	getch();
	return 0;
}
