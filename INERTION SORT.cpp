#include<bits/stdc++.h>
using namespace std;
void INSERTION(int* arr,int start,int size)
{
	for   (int i=start;i<size;i++)
	{
		int key=arr[i];
		int j=i-1;
		while   (j>=0   &&   arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
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
	INSERTION(arr,0,size);
	cout<<"The Elements In The Array After Sorting Is As Follows=[   ";
	for   (int i=0;i<size;i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout<<"]"<<endl;
	return 0;
	getchar();
}
