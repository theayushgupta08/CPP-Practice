#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=6;i++)
	{
		cout<<endl;
		for(int s=1;s<=6-i;s++)
		cout<<" ";
		for(int j=1;j<=i;j++)
		cout<<"*";
	}
	return 0;
}
