#include<iostream>
using namespace std;

void insertionsort(int a[10],int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		temp=a[i];
		for(int j=i-1;j>=0 && a[j]>temp;j--)
		{
			a[j+1]=a[j];
			a[j+1]=temp;
		}
	}
}

int main()
{
	int a[10],n;
	cout<<"\nEnter the number of elements: ";
	cin>>n;
	
	cout<<"\nEnter the elements:\n ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	insertionsort(a,n);
	cout<<"\nSorted array is: \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	return 0;
}
