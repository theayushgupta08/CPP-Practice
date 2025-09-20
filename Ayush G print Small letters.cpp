#include<iostream>
using namespace std;
int main()
{
	int n;
	char a[10];
	cout<<"Enter the no. of values:";
	cin>>n;
	if(n>10)
	cout<<"\n Invalid input";
	else
	{
		cout<<"\n Enter the "<<n<<" values:";
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<"\n All Small letters are: ";
		for(int i=0;i<n;i++)
		{
			if(a[i]>=97 && a[i]<=122)
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
