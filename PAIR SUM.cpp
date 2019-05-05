#include <iostream>
using namespace std;

	void pairSum(int arr[],int size,int x)
	{
		int i;
		int j;

		for(i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		for(i=0;(i<size-1);i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(arr[i]+arr[j]== x)
				{
					else if(arr[i]>arr[j])
					{
						int temp[i] = arr[i];
							arr[i]=arr[j];
							arr[j]=temp[i];
						cout<<arr[i]<<"  "<<arr[j]<<endl;
					}
					else
					{
						cout<<arr[i]<<"  "<<arr[j]<<endl;
					}
				}
			}
			count++;
		}
	}
	int main()
	{
		int arr[100];
		int size;
		cin>>size;
		int x;
		cout<<"enter required sum"<<endl;
		cin>>x;
		pairSum(arr,size,x);
	}
