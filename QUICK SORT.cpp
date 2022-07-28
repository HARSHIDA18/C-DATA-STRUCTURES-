#include<bits/stdc++.h>
using namespace std;
int partition(int* arr,int start,int size)
{
	int pivot=arr[start];
	int count=0;
	for   (int i=start+1;i<=size;i++)
	{
		if   (arr[i]<pivot)
		{
			count++;
		}
	}
	int pivotArrayIndex=start+count;
	swap(arr[start],arr[pivotArrayIndex]);
	int index1=start,index2=size;
	while   (index1<pivotArrayIndex   &&   index2>pivotArrayIndex)
	{
		while   (pivot>arr[index1])
		{
			index1++;
		}
		while   (pivot<arr[index2])
		{
			index2++;
		}
		if   (index1<pivotArrayIndex   &&   index2>pivotArrayIndex)
		{
			swap(arr[index1++],arr[index2--]);
		}
	}
	return pivotArrayIndex;
}
void QUICK(int* arr,int start,int size)
{
	//base case/condition
	if   (start>=size)
	{
		return;
	}
	int p=partition(arr,start,size);
	QUICK(arr,start,p-1);
	QUICK(arr,p+1,size);
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
	QUICK(arr,0,size-1);
	cout<<"The Elements After Sorting In The Array Is As Follows=[   ";
	for   (int i=0;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]"<<endl;
	return 0;
	getchar;
}
