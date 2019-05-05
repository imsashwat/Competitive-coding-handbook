#include<iostream>
using namespace std;
void insertionSort(int arr[],int n)
{
    int i,j,temp;
    for(i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    for(i=1 ; i<n ; i++)
    {
        temp = arr[i] ;
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(j=0 ; j<n ;j++)
    {
        cout<<arr[j];
    }
}
int main()
{
    int a[100];
    int size;
    cin>>size;
    insertionSort(a,size);
}
