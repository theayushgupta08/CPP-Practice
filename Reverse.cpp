#include<iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,4,5};
	cout<<"\nThe Array is: \n";
	for(int i=0;i<=4;i++)
	cout<<a[i]<<" ";
	cout<<"\nThe reverse is: \n";
	for(int i=4;i>=0;i--)
	cout<<a[i]<<" ";
	return 0;
}
