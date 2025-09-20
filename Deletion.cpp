#include<iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,4,5};
	int del;
	cout<<"\nEnter the index for the element to be deleted: ";
	cin>>del;
	for(int i=0;i<5;i++)
	{
		if(i>=del)
		{
			a[i]=a[i+1];
		}
		else
		continue;
		
	}
	for(int i=0;i<4;i++)
	cout<<a[i]<<" ";
	return 0;
}
