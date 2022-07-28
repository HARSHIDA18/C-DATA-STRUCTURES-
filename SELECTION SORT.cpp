#include<bits/stdc++.h>
using namespace std;
void SELECTION(int* arr,int start,int size)
{
	for   (int i=start;i<size-1;i++)
	{
		for   (int j=i+1;j<size;j++)
		{
			if   (arr[i+1]<arr[i])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
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
	SELECTION(arr,0,size);
	cout<<"The Elements In The Array Are As Follows=[   ";
	for   (int i=0;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]"<<endl;
	return 0;
	getchar();
}
