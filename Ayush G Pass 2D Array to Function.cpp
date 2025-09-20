#include<iostream>
using namespace std;
int main()
{
	void input(int[][10],int&,int&);  //Funtion Prototype
	void display(int[][10],int,int);  //Funtion Prototype
	int a[10][10],r,c;
	input(a,r,c);  //Funtion Call
	display(a,r,c);  //Funtion Call
	return 0;
}
void input(int a[10][10],int&r,int&c)  //Funtion Definition
{
	cout<<"\nEnter the no. of rows:";
	cin>>r;
	cout<<"\nEnter the no. of columns:";
	cin>>c;
	cout<<"\nEnter the "<<r*c<<" values:";
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	cin>>a[i][j];
	
}
void display(int a[10][10],int r,int c)  //Funtion Definition
{
	cout<<"\nThe values are:";
	for(int i=0;i<r;i++)
		{
			cout<<endl;
			for(int j=0;j<c;j++)
			cout<<" "<<a[i][j];
		}
}
