#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[200];
	cout<<"Enter any String:";
	cin.getline(a,200);
	cout<<" \nReverse of the string is:"<<strrev(a);
	cout<<" \nLenght of the string:"<<strlen(a);
	
	return 0;
	
}
