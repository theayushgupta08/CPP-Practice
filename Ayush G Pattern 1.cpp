#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=6;i++)
	{
		cout<<endl;
		for(int j=1;j<=i;j++)
		if(j==1)
		cout<<"*";
		else
		cout<<"**";
	}
	return 0;
}
