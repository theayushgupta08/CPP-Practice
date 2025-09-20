#include<iostream>
using namespace std;
int main()
{
	void input(int[],int&);  //Function Prototype
	void display(int[],int);  //Function Prototype
	int a[10],n;
	input(a,n);  //Function Call
	display(a,n);  //Function Call
	return 0;
}
void input(int a[10],int&n)  //Function Definition
{
	cout<<"\nEnter the no. of values:";
	cin>>n;
	
	cout<<"\nEnter the "<<n<<" values:";
	for(int i=0;i<n;i++)
	cin>>a[i];
	
}
void display(int a[10],int n)  //Function Definition
{
	cout<<"\nThe values are:";
	for(int i=0;i<n;i++)
		{
			
			cout<<" "<<a[i];
		}
}
