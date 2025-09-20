#include<iostream>
using namespace std;


int sequential(int a[10],int key, int n)
{
	int i=0;
	while(i<n && key>a[i])
	{
		i++;
		if(i<n && key==a[i])
		{
			return(i);
		}
		
	}
	return(-1);
}
int main()
{
	int a[10]={1,2,33,66,21,33,44,99,22,43}, key, n=10;
	cout<<"\nEnter the key to be searched: ";
	cin>>key;
	
	cout<<"\nThe Index of Key is: "<<sequential(a,key,n);
	
	return 0;
}
