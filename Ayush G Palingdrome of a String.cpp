#include<iostream>
using namespace std;
int main()
{
	char str[20];
	int l=0,j=0;
	cout<<"Enter any string of 20 characters:";
	cin.getline(str,20); 
		cout<<"\n Lenght is::";
	for(int i=0;str[i]!='\0';i++)
	{
		l++;
	}
	cout<<l;
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==str[(l-1)-i])
		j++;
	}
	if(j==l)
	cout<<"\n It is palingdrome";

	if(j!=l)
	cout<<"\n It is not palingdrome";
	return 0;
	
}
