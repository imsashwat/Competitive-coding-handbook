#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int i;
    int size;
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for(i=0;i<size;i++)
    {
        if(arr[i]!= 0)
    {
        arr[count]=arr[i];
        count++ ;
    }
    }
    while (count<size)
    {
        arr[count]=0;
        count++;
    }
    for(i=0 ; i <size ;i++)
    {
        cout<<arr[i];
    }
}
