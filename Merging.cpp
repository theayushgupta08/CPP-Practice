#include<iostream>
using namespace std;

int main()
{
	int a[3]={1,3,5}, b[2]={2,4};
	int c[5];
	cout<<"\nMerging Two Sorted Arrays: \n";
	
	for(int i=0;i<5;i++)
	{
		if(a[i]>b[i])
		{
			c[i]=b[i];
		}
		else
		c[i]=a[i];
	}
	
	cout<<"\nMerged Array is: \n";
	for(int i=0;i<5;i++)
	cout<<c[i]<<" ";
	return 0;
}
