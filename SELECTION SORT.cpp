#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ; i<n-1 ; i++)
    {
        int min=arr[i];
        int loc = i ;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                loc = j;
            }
        }
            int temp = arr[i];
            arr[i]   = arr[loc];
            arr[loc]   = temp;
    }
        for (int i=0 ; i<n ; i++)
        {
            cout<<arr[i];
        }
}
int main()
{
    int a[100];
    int size;
    cin>>size;
    bubbleSort(a,size);
}
