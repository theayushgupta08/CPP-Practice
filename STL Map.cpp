#include<iostream>
#include<map>
using namespace std;

int main()
{
	string name;
	long int tno;
	map<string, long int> phonebook;
	int n;
	
	cout<<"\nEnter the number of records to be taken: ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cout<<"\nEnter the name of the person: ";
		cin>>name;
		
		cout<<"\nEnter the telephone of the person: ";
		cin>>tno;
		
		phonebook[name]=tno;
		
	}
	
	phonebook["Ayush"] = 454656;   //Direct
	
	phonebook.insert(pair<string,long int> ("Shravi",234234)); //Insert Function
	
	int size=phonebook.size();
	
	cout<<"\nThe size of the phonebook is: "<<size<<endl;
	
	map<string, long int> :: iterator it;
	
	cout<<"\nThe records of the phonebook is: \n"<<endl;
	for(it=phonebook.begin();it!=phonebook.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	
	cout<<"\nEnter the Name to get the number: ";
	string getname;
	cin>>getname;
	int number;
	number= phonebook[getname];
	
	if(number==0)
	cout<<"\nNo Record Found!!!";
	else
	cout<<"\nTelephone Number is: "<<number;
	
	return 0;
}
