#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	void string_reverse(char[],int&);
	void string_length(char[],int&);
	void string_copy(char[],char[]);
	
	char str[20],str1[20];
	int l=0,a=0;
		
	string_reverse(str,l);
	string_length(str,a);
	string_copy(str,str1);
	return 0;
}
void string_reverse(char str[20],int&l)
{
	cout<<"\nREVERSE OF THE STRING";
	cout<<"\n\nEnter any String of Characters:";
	cin>>str;
	for(int i=0;str[i]!='\0';i++)
	l++;
	cout<<"\nReverse of the String is:";
	for(int i=l-1;str[i]!='\0';i--)
	cout<<str[i];

}

void string_length(char str[20],int&a)

{

	cout<<"\n\nLENGTH OF THE STRING";
	cout<<"\n\nEnter any String of Characters:";
	cin>>str;
	cout<<"\nLength of the String is:";
	for(int i=0;str[i]!='\0';i++)
	a++;
	
	cout<<a;
}
void string_copy(char str[20],char str1[20])
{
	cout<<"\n\nCOPY OF THE STRING";
	cout<<"\n\nEnter any String of Characters:";
	cin>>str;
	cout<<"\nThe copy of the original string is:";
	for(int i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
		cout<<str1[i];
	}
}
