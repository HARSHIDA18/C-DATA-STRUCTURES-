#include<bits/stdc++.h>
using namespace std;
class Node 
{
	public:
		int data;
		Node* next;
		Node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
		~Node()
		{
			int value=this->data;
			if   (this->next!=NULL)
			{
				this->next=NULL;
				delete next;
			}
			cout<<"The Value In The Deleted Node Was="<<value<<endl;
		}
};
void InsertAtHead(Node* &head,int da)
{
	Node* temp=new Node(da);
	temp->next=head;
	head=temp;
}
void InsertAtTail(Node* &tail,int da)
{
	Node* temp=new Node(da);
	tail->next=temp;
	tail=temp;
}
void InsertAtMiddle(Node* &tail,Node* &head,int position,int da)
{
	//base case/condition
	if   (position==1)
	{
		InsertAtHead(head,da);
		return;
	}
	else 
	{
		Node* temp=head;
		int count=0;
		while   (count<position-1)
		{
			temp=temp->next;
			count++;
		}
		Node* newNode=new Node(da);
		newNode->next=temp->next;
		temp->next=newNode;
	}
}
void Delete(Node* &head,Node* &tail,int position)
{
	//base case/condition
	if   (position==1)
	{
		Node* temp=head;
		head=temp->next;
		temp->next=NULL;
		delete temp;
	}
	else 
	{
		Node* previous=NULL;
		Node* current=head;
		int count=0;
		while   (count<position)
		{
			previous=current;
			current=current->next;
			count++;
		}
		previous->next=current->next;
		current->next=NULL;
		delete current;
	}
}
void Print(Node* &head)
{
	Node* temp=head;
	if   (temp==NULL)
	{
		return;
	}
	else 
	{
		while   (temp!=NULL)
		{
			cout<<temp->data<<"   ";
			temp=temp->next;
		}
	}
}
int main   ()
{
	Node* node1=new Node(10);
	Node* head=node1;
	Node* tail=node1;
	InsertAtHead(head,11);
	InsertAtHead(head,12);
	InsertAtMiddle(tail,head,3,13);
	InsertAtTail(tail,14);
	cout<<"The Elements In The LinkedList Are As Follows=[   ";
	Print(head);
	cout<<"]"<<endl;
	Delete(head,tail,2);
	cout<<"The Elements In The LinkedList After Deletion Of The Node Is As Follows=[   ";
	Print(head);
	cout<<"]"<<endl;
	return 0;
	getchar();
}
