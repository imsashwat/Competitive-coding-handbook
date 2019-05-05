#include<iostream>
using namespace std;
int binarySearch(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int val;
    cin>>val;
    int mid,start,end;
    start=0;
    end = n-1;
    while(start <= end)
    {
        mid=(start+end)/2;

        if(arr[mid]==val)
        {
            return mid;
            break;
        }
        else if (val<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start= mid+1;
        }
    }
}
int main()
{
    int a[100];
    int size;
    cin>>size;
    int x = binarySearch(a,size);
    cout<<x;
}
