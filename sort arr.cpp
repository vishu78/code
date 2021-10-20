#include<bits/stdc++.h>
using namespace std;
void algorithm(int arr[])
{
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	cout<<"after sorting:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[]={83,1,45,95,45,52,11,47,0,45,67,82};
	algorithm(arr);
	
}