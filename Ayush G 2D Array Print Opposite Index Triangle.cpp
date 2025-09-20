#include<iostream>
using namespace std;
int main()
{
	int a[20][20],r,c;
	cout<<"Enter the no. of rows:";
	cin>>r;
	cout<<"\nEnter the no. of Columns:";
	cin>>c;
	if(r>20 || c>20)
	cout<<"\nInvalid input";
	else
	{
		cout<<"\nEnter the "<<r*c<<" values:";
		for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		cin>>a[i][j];
		cout<<"\nThe original Array is:";
		for(int i=0;i<r;i++)
		{
			cout<<endl;
			for(int j=0;j<c;j++)
			cout<<" "<<a[i][j]<<" "<<"("<<i<<","<<j<<")";
		}
		
		cout<<"\nThe opposite index triangle of original Array is:";
		for(int i=0;i<r;i++)
		{
			cout<<endl;
			for(int j=2-i;j<r;j++)
			cout<<" "<<a[j][i];
		}
		
	}
	return 0;
}
