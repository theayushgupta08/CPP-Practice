#include<iostream>
using namespace std;
int main()
{	int a;
	void areaofcircle(int);  //Function Prototype
		cout<<"\nEnter the Radius:";
		cin>>a;
	areaofcircle(a);  //Function Call

	
}
void areaofcircle(int r)   //Function Definition
{	
	cout<<"\nArea of Circle is:"<<3.14*r*r;
}

