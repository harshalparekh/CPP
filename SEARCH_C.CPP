//header file implementation
// C++ program to implement recursive Binary Search
#include<iostream.h>
#include<conio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1


int bs(int arr[],int l,int r,int item)
{
	
		if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == item)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > item)
			return bs(arr, l, mid - 1, item);

		// Else the element can only be present
		// in right subarray
		return bs(arr, mid + 1, r, item);
	}

	// We reach here when element is not
	// present in array
	return -1;
}



int main(void)
{
	  int n,item,i,roll[60];
	  int bs(int arr[],int,int,int);
	  //accepts n elements  
	cout<<"Enter no of elemenys\n";
	  cin>>n;
	//dynamic memory allocation
	  int *arr=new int[n];

	  cout<<"Enter elements\n";
	  for(i=0;i<n;i++)
	  cin>>arr[i];

	  cout<<"enter item to be seardhe\n";
	  cin>>item;

      //	int n = sizeof(arr) / sizeof(arr[0]);

	int result = bs(arr,0,n-1,item);
	(result == -1) ? cout << "Element is not present in array"
	: cout << "Element is present at index " << result;

	getch();
	return 0;
}
