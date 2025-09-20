#include<iostream>
using namespace std;

int binary(int a[10], int key, int i, int j)
{
	int c;
	c=i+j/2;
	while(a[c]!=key && i<=j)
	{
		if(key>a[c])
		i=c+1;
		else
		j=c-1;
	}
	if(i<=j)
	return(c);
	
	return(-1);
}

int main()
{
	int a[10]={1,2,33,66,21,33,44,99,22,43}, key, i=0,j=9;
	cout<<"\nEnter the element to be searched: ";
	cin>>key;
	
	cout<<"\nThe index of the key is: "<<binary(a,key,i,j);
	
	return 0;
}
