#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cout<<"Enter any String of small letters:";
	cin>>a;
	cout<<"\nAll the letters in capital letters are:";
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]>=96 && a[i]<=122)
		cout<<" "<<char(a[i]-32);
    }
	
	return 0;
}
