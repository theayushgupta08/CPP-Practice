#include<iostream>
using namespace std;
int main()
{
	int t,a[10][10],r,c,k=1;
	cout<<"\nEnter the number of rows: ";
	cin>>r;
	cout<<"\nEnter the number of columns: ";
	cin>>c;
	cout<<"\nEnter the number of non-zero values: ";
	cin>>t;
	a[0][0]=r;
	a[0][1]=c;
	a[0][2]=t;
	cout<<"\nEnter the values (Row, Column, Element): ";
	for(int i=1;i<=t;i++)
	{
		cout<<"\nEnter the set "<<i<<" : \n";
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}
	
	//Display the sparse matrix
	
	cout<<"\nThe Sparse Matrix is: \n";
	for(int i=0;i<=t;i++)
	{
		cout<<a[i][0]<<" | "<<a[i][1]<<" | "<<a[i][2]<<endl;
		if(i==0)
		cout<<"---------\n";
	}
	
	int tot[10],in[10],loc;
	for(int i=1;i<=c;i++)
	{
		for(int j=0;j<c;j++)
		{
			
		}
		
	}
	
	return 0;
}
