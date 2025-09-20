#include<iostream>
using namespace std;
int main()
{
	char a[20];
	int l=0;
	cout<<"Enter any String:";
	cin>>a;
	cout<<"\nLength of the string is:";
	for(int i=0;a[i]!=0;i++)
	{
		l++;
	}
	cout<<l;
	cout<<"\nString in Reverse is:";
	for(int i=l-1;a[i]>=0;i--)
	{
		cout<<" "<<a[i];
	}
	return 0;
}
