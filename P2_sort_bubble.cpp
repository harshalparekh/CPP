#include<iostream>
using namespace std;
int main()
{
    int a[15],n,i,j,temp;
    cout<<"\nEnter number of elements you want to enter : ";
    cin>>n;
    cout<<"\nEnter the elements : ";
    for(i=0;i<n;i++) // for storing elements
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)  // for number of passes
    {
        for(j=0;j<n-i-1;j++) // for number of iterations in passes
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\nAfter sorting : \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
}
