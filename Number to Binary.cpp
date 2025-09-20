#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,a[10000],s;
	cout<<"\nEnter any Number:";
	cin>>n;
	cout<<"\nThe Binary of the Number is: ";
	for(int i=n;i>0;i=i/2)
	{
		s=n%2;
		a[i]=s;
		n=n/2;
	cout<<a[i];
	}
	return 0;
}

