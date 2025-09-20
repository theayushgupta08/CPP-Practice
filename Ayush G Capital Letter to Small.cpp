#include<iostream>
using namespace std;
int main()
{
	int n;
	char a[10];
	cout<<"Enter the no. of values:";
	cin>>n;
	if(n>10)
	cout<<"\n Invalid Input";
	else
	{
		cout<<"\nEnter the "<<n<<" alphabets in capital letters:";
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		{
			if(a[i]>=96 && a[i]<=122)
			cout<<endl<<a[i]<<" at index "<<i<<" is already in Small Letter.";
			if(a[i]>=65 && a[i]<=90)
			cout<<endl<<a[i]<<" at index "<<i<<" in small letter is "<<char(a[i]+32);
		}
	}
	return 0;
}
