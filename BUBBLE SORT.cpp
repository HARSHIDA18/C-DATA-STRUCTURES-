#include<bits/stdc++.h>
using namespace std;
void BUBBLE(int* arr,int start,int size)
{
	int counter=0;
	while   (counter<size)
	{
		for   (int i=start;i<size-counter;i++)
		{
			if   (arr[i+1]<arr[i])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
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
	BUBBLE(arr,0,size);
	cout<<"The Elements In The Array After Sorting Is As Follows=[   ";
	for   (int i=0;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]"<<endl;
	return 0;
	getchar();
}
