#include<iostream>
using namespace std;
int main()

{
	for(int i=4;i>=1;i--)
	{
		cout<<endl;
		for(int j=1;j<=i;j++)
		if(j!=4 && i!=1)
		cout<<"*";
		for(int s=1;s<=2*(4-i)-1;s++)
		if(i!=1)
		cout<<" ";
		for(int k=i;k>=1;k--)
		if(i!=1)
		cout<<"*";
	}
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=i;j++)
		if(j!=4 )
		cout<<"*";
		for(int s=1;s<=2*(4-i)-1;s++)
		cout<<" ";
		for(int k=i;k>=1;k--)
		cout<<"*";
		cout<<endl;
	}

	return 0;

}
