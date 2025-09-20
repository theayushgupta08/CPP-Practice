#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no. of values:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		
		cout<<endl;
		for(int s=1;s<=n-i;s++)
		cout<<" ";
		for(int j=1;j<=1;j++)
		if(i!=1)
		cout<<"*";
		for(int k=1;k<=2*(i-1)-1;k++)
		cout<<" ";
		for(int l=1;l<=1;l++)
		cout<<"*";
	}
	for(int i=n;i>=1;i--)
	{
		if(i!=n)
		cout<<endl;
		for(int s=1;s<=n-i;s++)
		cout<<" ";
		for(int j=1;j<=1;j++)
		if(i!=1 && i!=n)
		cout<<"*";
		for(int k=1;k<=2*(i-1)-1;k++)
		cout<<" ";
		for(int l=1;l<=1;l++)
		if(i!=n)
		cout<<"*";
	}
	return 0;
}
