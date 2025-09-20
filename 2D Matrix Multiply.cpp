#include<iostream>
using namespace std;

int main()
{
	int a[5][5], b[5][5],c[5][5];
	
	cout<<"\n Enter the Elements in Matrix 1: \n";
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	cin>>a[i][j];
	
	cout<<"\n Enter the Elements in Matrix 2: \n";
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	cin>>b[i][j];
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			c[i][j]=0;
			for(int k=0;k<5;k++)
			{
				c[i][j]=c[i][j] + a[i][k]*b[k][j];
			}
		}
	}
	
	cout<<"\n Multiplication of both is: \n";
	for(int i=0;i<5;i++)
	{
	for(int j=0;j<5;j++)
	cout<<c[i][j]<<" ";
	cout<<endl;
	
	}
	return 0;
}
