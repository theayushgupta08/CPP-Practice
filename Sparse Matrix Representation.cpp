#include<iostream>
using namespace std;
int main()
{
	int a[10][10],c,r;
	cout<<"\nEnter the number of columns: ";
	cin>>c;
	cout<<"\nEnter the number of rows: ";
	cin>>r;
	cout<<"\nEnter the values in the  matrix: \n";
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	cin>>a[i][j];
	
	//Display the matrix
	
	cout<<"\nThe entered matrix is: \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//Converting this 2D Matrix into Sparse Matrix
	int k=1;
	a[0][0]=r;
	a[0][1]=c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				a[k][0]=i;
				a[k][1]=j;
				a[k][2]=a[i][j];
				k++;
				
			}
		}
	
	a[0][2]=k-1;
}
	cout<<"\nThe Matrix in Sparse Form is: \n";
	int n=k-1;
	for(int i=0;i<=n;i++)
	{
		cout<<a[i][0]<<" | "<<a[i][1]<<" | "<<a[i][2]<<endl;
		if(i==0)
		{
			cout<<"---------\n";
		}
	}
	return 0;
}
