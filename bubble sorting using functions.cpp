#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    int i,j,temp;
    for(i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    while(j<n)  // j ki vjh se hum har index ko itrate kar paenge mtlb har particular index k lie loop chlega poore array me.
    {
    for(i=0 ; i<n ;i++)
    {
        if(arr[i] > arr[i+1])
        {
            temp     = arr[i+1];  //arr[i+1] ki vjh se jo bada no hoga wo last index pe shift ho jaega
            arr[i+1] = arr[i] ;
            arr[i]   = temp;
        }
    }
    j++ ;
    }
    for(i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<"  ";
    }

}
int main()
{
    int a[100];
    int size;
    cin>>size;
    bubbleSort(a,size);
}
