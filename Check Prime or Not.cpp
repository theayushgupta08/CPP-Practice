#include<iostream>
using namespace std;
int main()
{
	int n,c=1,p=0;
	cout<<"\nEnter any number:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%c==0)
		p++;
		c++;
	}
	if(p==2)
	cout<<"\nIt is a Prime Number!";
	else
	cout<<"\nIt is a Composite Number!";
	return 0;
}
