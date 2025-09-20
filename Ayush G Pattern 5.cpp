#include<iostream>
using namespace std;
int main()
{
	for(int i=5;i>=1;i--)
	{
		cout<<endl;
		for(int s=1;s<=5-i;s++)
		cout<<" ";
		for(int j=i-1;j>=1;j--)
		cout<<j;

	}
	return 0;
}
