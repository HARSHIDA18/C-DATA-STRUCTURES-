#include<bits/stdc++.h>
using namespace std;
void LINEAR(int* arr,int start,int size)
{
	int element;
	cout<<"Enter The Element To Find=";
	cin>>element;
	for   (int i=start;i<size;i++)
	{
		if   (arr[i]==element)
		{
			cout<<"The Index Position Of The "<<element<<" Is "<<i<<endl;
		}
	}
}
void BINARY(int* arr,int start,int size)
{
	int element;
	cout<<"Enter The Element To Find=";
	cin>>element;
	int first=start;
	int end=size-1;
	while   (first<=end)
	{
		int middle=start+(end-start)/2;
		if   (arr[middle]==element)
		{
			cout<<"The Index Position Of The "<<element<<" Is "<<middle<<endl;
			break;
		}
		else if   (arr[middle]>element)
		{
			end=middle-1;
		}
		else 
		{
			first=middle+1;
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
	int condition;
	cout<<"Choose The Following Condition=\n1.Linear Search\n2.Binary Search"<<endl;
	cin>>condition;
	switch(condition)
	{
		case 1:
			LINEAR(arr,0,size);
			break;
		case 2:
			BINARY(arr,0,size);
			break;
		default:
			cout<<"The Entered Condition Is Not Valid."<<endl;
			break;
	}
	return 0;
	getchar();
}
