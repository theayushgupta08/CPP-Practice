#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
	
	Node(int d)
	{
		data=d;
		next=NULL;
	}	
};

	void traversing(Node* Head)
	{
		if(Head==NULL)
		cout<<"\nThe Linked List is Empty!";
		else
		{
			Node* ptr;
			ptr=Head;
			while(ptr!=NULL)
			{
				cout<<ptr->data;
				ptr=ptr->next;
			}
		}
	}
	//Insert at begining
	void inserting1(Node*& Head, int data)
	{
		Node* n= new Node(data);
		n->next=Head;
		Head=n;
	}
	
	//Insert at the end
	void inserting2(Node*& Head, int data)
	{
		Node* n1=new Node(data);
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
	
	//Insert at the beginning
	void inserting3(Node*& Head, int data, int x)
	{
		Node* n3=new Node(data);
		Node* ptr2;
		ptr2=Head;
		while(ptr2!=NULL && ptr2->data!=x)
		{
			ptr2=ptr2->next;
		}
		if(ptr2->data==x)
		{
			n3->next=ptr2->next;
			ptr2->next=n3;
		}
		else
		Head=n3;
	}
	
	
//Deleting first node	 
void deleting1(Node* Head)
{
	Node* ptr;
	if(Head==NULL)
	cout<<"\nThe List is already empty!";
	else
	{
		ptr=Head;
		Head=Head->next;
		delete ptr;
	}
	cout<<"\nList after deleting first node: ";
	while (Head != NULL) {
        cout << Head->data << "->";
        Head = Head->next;
    }
    cout<<endl;
	
}

//Deleting Last Node
void deleting2(Node* Head)
{
	Node* ptr, * prep;
	ptr=Head;
	while(ptr->next!=NULL)
	{
		prep=ptr;
		ptr=ptr->next;
	}
	prep->next=NULL;
	delete ptr;
	
	//Print
	cout<<"\nList after deleting the last node is: ";
	while (Head != NULL) {
        cout << Head->data << "->";
        Head = Head->next;
    }
    cout<<endl;
}

//Deleting in Between
void deleting3(Node* Head, int x)
{
	Node* ptr,* ptr2;
	if(Head==NULL)
	{
		cout<<"\nList is Empty";
	}
	else
	{
	ptr=Head;
	while(ptr->next!=NULL)
	{
		
	if(ptr->data==x)
	{
		ptr2=ptr->next;
		ptr->next=ptr2->next;
		delete ptr2;
		break;
	}
	ptr=ptr->next;
	}
	}
	cout<<"\nList after deleting: ";
	while (Head != NULL) {
        cout << Head->data << "->";
        Head = Head->next;
    }
    cout<<endl;
}

//Delete List
void deletelist(Node* Head)
{
	
	Node* ptr;
	ptr=Head;
	while(ptr!=NULL)
	{
		
	    ptr=ptr->next;
		delete Head;
		Head=ptr;
	}
	
	cout<<"\nDeletig the List....";
	while (Head != NULL) {
        cout << Head->data << "->";
        Head = Head->next;
    }
    cout<<endl;
}

//Print the list
void print(Node* Head)
{
    while (Head != NULL) {
        cout << Head->data << "->";
        Head = Head->next;
    }
    cout<<endl;
}

int main()
{
	Node* Head=NULL;
	inserting1(Head,1);
	inserting1(Head,5);
	inserting1(Head,6);
	int x,x1;
	cout<<"\nEnter the data after which to be added: ";
	cin>>x;
	
	inserting3(Head,7,x);
	
	print(Head);
	
	deleting1(Head);
	
	deleting2(Head);
	
	cout<<"\nEnter the Node after which to be deleted: ";
	cin>>x1;
	
	deleting3(Head,x1);
	
	deletelist(Head);
	
	
	return 0;
}
