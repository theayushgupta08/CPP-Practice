#include<iostream>
using namespace std;
int main()
{
	char a[20];
	cout<<"Enter any string of 20 characters:";
	cin>>a;
	cout<<"\n All Small Letters are:";
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]>=96 && a[i]<=122)
	    cout<<" "<<a[i];
	}
	return 0;
}
