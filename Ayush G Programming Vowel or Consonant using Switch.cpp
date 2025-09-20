#include<iostream>
using namespace std;
int main()
{
	
	char ch;
	cout<<"Enter any alphabet to check it is Vowel or Consonant:";
	cin>>ch;
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		cout<<"\nIt is a vowel.";
		break;
		default:
		cout<<"\nIt is a consonant.";
		break;
			
	}
	return 0;
}
