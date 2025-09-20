#include<iostream>
using namespace std;
int main()
{
	int a=0;
	for(int i=1;i<=16;i+=4)
	{
		cout<<endl;
		for(int j=i;j<=i+a;j++)
		cout<<" "<<char(j+64);
		a++;
	}
	return 0;
}
