#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int l=0;
	cout<<"Enter any String:";
	cin>>a;
	cout<<"\nLength of the string is:";
	for(int i=0;a[i]!=0;i++)
	{
		l++;
	}
	cout<<l;
	
	return 0;
}
