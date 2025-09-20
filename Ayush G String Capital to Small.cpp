#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cout<<"Enter any String of capital letters:";
	cin>>a;
	cout<<"\nAll the letters in small letters are:";
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		cout<<" "<<char(a[i]+32);
    }
	
	return 0;
}
