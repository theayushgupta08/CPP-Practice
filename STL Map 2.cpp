#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;

int main()
{
	
	string state;
	int popu;
	
	map<string,int> atlas;
	
	int n;
	
	cout<<"\nEnter the number of state to be taken: ";
	cin>>n;
	
	atlas["UP"]=213123;
	
	atlas.insert(pair<string,int> ("MP", 24324132));
	
	for(int i=1;i<=n;i++)
	{
		cout<<"\nEnter the State Name: ";
		cin>>state;
		
		cout<<"\nEnter the Population: ";
		cin>>popu;
		
		atlas[state]=popu;
	}
	
	map<string,int>::  iterator it;
	cout<<"\n The State Names with their population are: \n"<<endl;
	for(it=atlas.begin();it!=atlas.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	
	string name;
	cout<<"\nEnter the State Name to get population: ";
	cin>>name;
	
	int number;
	number=atlas[name];
	
	if(number==0)
	cout<<"\nNo Record Found!!!";
	else
	cout<<"\nPopulation is: "<<number;
	
	return 0;

}
