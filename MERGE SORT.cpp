#include<bits/stdc++.h>
using namespace std;
void Merge_Sort(int* arr,int start,int size)
{
	int middle=start+(size-start)/2;
	int length1=middle-start+1;
	int length2=size-middle;
	int* first=new int[length1];
	int* second=new int[length2];
	int mainArrayIndex=start;
	for   (int i=0;i<length1;i++)
	{
		first[i]=arr[mainArrayIndex++];
	}
	mainArrayIndex=middle+1;
	for   (int i=0;i<length2;i++)
	{
		second[i]=arr[mainArrayIndex++];
	}
	int index1=0,index2=0;
	mainArrayIndex=start;
	while   (index1<length1   &&   index2<length2)
	{
		if   (first[index1]<second[index2])
		{
			arr[mainArrayIndex++]=first[index1++];
		}
		else 
		{
			arr[mainArrayIndex++]=second[index2++];
		}
	}
	while   (index1<length1)
	{
		arr[mainArrayIndex++]=first[index1++];
	}
	while   (index2<length2)
	{
		arr[mainArrayIndex++]=second[index2++];
	}
}
void MERGE(int* arr,int start,int size)
{
	//base case/condition
	if   (start>=size)
	{
		return;
	}
	int middle=start+(size-start)/2;
	MERGE(arr,start,middle);
	MERGE(arr,middle+1,size);
	Merge_Sort(arr,start,size);
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
	MERGE(arr,0,size-1);
	cout<<"The Elements After Sorting In The Array Is As Follows=[   ";
	for   (int i=0;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]"<<endl;
	return 0;
	getchar();
}
