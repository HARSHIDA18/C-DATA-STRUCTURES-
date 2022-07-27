#include<bits/stdc++.h>
using namespace std;
void BUBBLE(int* arr,int start,int size)
{
	int counter=start;
	while   (start<size)
	{
		for   (int i=start;i<size-counter;i++)
		{
			if   (arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
	cout<<"The Elements After Sorting Is As Follows=[   ";
	for   (int i=start;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]"<<endl;
}
void SELECTION(int* arr,int start,int size)
{
	for   (int i=start;i<size-1;i++)
	{
		for   (int j=i+1;i<size;i++)
		{
			if   (arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"The Elements In The Array After Sorting Is As Follows=[   ";
	for   (int i=start;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]"<<endl;
}
void INSERTION(int* arr,int start,int size)
{
	int counter=start;
	for   (int i=start;i<size;i++)
	{
		int key=arr[i];
		int j=i-1;
		while   (j>=0   &&   arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=arr[j];
	}
	cout<<"The Elements In The Array After Sorting Is As Follows=[   ";
	for   (int i=start;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]"<<endl;
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
	cout<<"Enter The Condition Accordingly=\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort"<<endl;
	cin>>condition;
	switch(condition)
	{
		case 1:
			BUBBLE(arr,0,size);
			break;
		case 2:
			SELECTION(arr,0,size);
			break;
		case 3:
			INSERTION(arr,0,size);
			break;
		default:
			cout<<"The Entered Condition Is Not Valid, Kindly Enter The Valid One!!!"<<endl;
			break;
	}
	return 0;
	getchar();
}
