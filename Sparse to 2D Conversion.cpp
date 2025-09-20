#include<iostream>
using namespace std;
int main()
{
	int k,r,c,a[10][10],b[10][10],t=1;
	cout<<"\nEnter the number of Non-Zero Elements: ";
	cin>>k;
	b[0][2]=k;
	cout<<"\nEnter the number of Rows: ";
	cin>>r;
	cout<<"\nEnter the number of Columns: ";
	cin>>c;
	a[0][0]=r;
	a[0][1]=c;
	cout<<"\nEnter the values (Row, Column, Value): \n";
	for(int i=1;i<=k;i++)
	{
		cout<<"\nEnter the set no. "<<i+1<<" : ";
		cin>>b[i][0]>>b[i][1]>>b[i][2];
	}
	
	//Converting Sparse Matrix to 2D Matrix
	
	for(int i=0;i<a[0][0];i++)
	for(int j=0;j<a[0][1];j++)
	{
		if(i!=b[t][0] || j!=b[t][1] || t>b[0][2])
		a[i][j]=0;
		else
		{
			a[i][j]=b[t][2];
			t++;
		}
	}
	
	//Printing the Matrix
	
    cout<<"\nThe Matrix in 2D Representation is: \n";
    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
	}
	return 0;
}
