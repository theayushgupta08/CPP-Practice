#include<iostream>
using namespace std;
int main()
{
	int a[10],c=0,n;
	cout<<"Enter the no. of values:";
	cin>>n;
	if(n>10)
	cout<<"\n Invalid Input";
	else
	{
		cout<<"\nEnter the "<<n<<" values:";
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<"\n The total no. of odd numbers are:";
		for(int i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			c++;
		}
		cout<<c;
	}
}
