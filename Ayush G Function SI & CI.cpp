#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	void i(float,float,float,float&,float&);  //Function Prototype
   
    float p,t,r,s,c; 
    cout<<"\nEnter the Principle Amount:";
    cin>>p;
    cout<<"\nEnter the Time :";
    cin>>t;
    cout<<"\nEnter the Rate of Intrest:";
    cin>>r;
    i(p,r,t,s,c);  //Function Call
    cout<<"\n\nSimple Interest is:"<<s;
    cout<<"\n\nCompound Interest is:"<<c;
    return 0;

}
void i(float p,float t,float r,float& s,float& c)  //Function Definition
{
	s=(p*t*r)/100;
	c=p*(pow(1+(r/100),t));
}

