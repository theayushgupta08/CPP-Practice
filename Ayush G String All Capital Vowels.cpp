#include<iostream>
using namespace std;
int main()
{
	char a[20];
	cout<<"Enter any string of 20 characters:";
	cin>>a;
	cout<<"\n All Capital Letter Vowels are:";
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
	    cout<<" "<<a[i];
	}
	return 0;
}
