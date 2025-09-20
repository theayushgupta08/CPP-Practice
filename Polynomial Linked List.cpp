#include<iostream>
using namespace std;

class Node
{
	int expo;
	float coeff;
	Node* next;
	
	Node(int e, float c)
	{
		expo=e;
		coeff=f;
		next=NULL;
	}
};

void inserting(Node* Head, int expo, float coeff)
{
		Node* n1=new Node(expo);
		Node* n1=new Node(coeff);
		n1->next=NULL;
		Node* ptr1;
		ptr1=Head;
		if(ptr1!=NULL)
		{
			while(ptr1!=NULL)
			{
				ptr1=ptr1->next;
		    }
			ptr1->next=n1;
			
		}
		else
		Head=n1;
}

int main()
{
	Node* Head=NULL;
	
}
