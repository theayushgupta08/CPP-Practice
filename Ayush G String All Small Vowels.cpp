#include<iostream>
using namespace std;
int main()
{
	char a[20];
	cout<<"Enter any string of 20 characters:";
	cin>>a;
	cout<<"\n All Small Letter Vowels are:";
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
	    cout<<" "<<a[i];
	}
	return 0;
}
