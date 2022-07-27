#include<bits/stdc++.h>
using namespace std;
void TRAVERSING(int* arr,int start,int size)
{
	cout<<"The Elements In The Array Is As Follows=[   ";
	for   (int i=start;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]"<<endl;
}
void INSERTION(int* arr,int start,int size)
{
	int index,element;
	cout<<"Enter The Index Position Where The Element Is To Be Inserted=";
	cin>>index;
	cout<<"Enter The Element Which Is To Be Inserted=";
	cin>>element;
	for   (int i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	size++;
	arr[index]=element;
	cout<<"The Elements After Insertion In The Array Is As Follows=[   ";
	for   (int i=0;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]"<<endl;
}
void DELETION(int* arr,int start,int size)
{
	int index;
	cout<<"Enter The Index Position From Where The Element Is To Be Deleted=";
	cin>>index;
	for   (int i=index;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
	cout<<"The Elements In The Array After Deletion Is As Follows=[   ";
	for   (int i=0;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]";
}
int main   ()
{
	int size;
	cout<<"Enter The Size Of The Array=";
	cin>>size;
	int arr[size];
	cout<<"Enter The Elements In The Array=";
	for   (int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int condition;
	cout<<"Choose The Option As Follows=\n1.Traversing\n2.Insertion\n3.Deletion"<<endl;
	cin>>condition;
	switch(condition)
	{
		case 1:
			TRAVERSING(arr,0,size);
			break;
		case 2:
			INSERTION(arr,0,size);
			break;
		case 3:
			DELETION(arr,0,size);
			break;
		default:
			cout<<"The Enetered Condition Is Not Valid."<<endl;
			break;
	}
	return 0;
	getchar();
}
