#include<iostream>
using namespace std;
int main()
{
	int num,sum;
	cout<<"\Enter any Digits Number: ";
	cin>>num;
	for(int i=num;i!=0;i=i/10)
	{
		sum=sum+i%10;
	}
	cout<<"\nSum of the digits is: "<<sum;
	return 0;
}
