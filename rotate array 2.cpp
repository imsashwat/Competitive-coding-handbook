#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7} ;
    int n = 7;
    int i ;
    int d;
    cout<<"enter the value at rotation " ;
    cin>>d;
    for(i=0;arr[i]<d;i++)
    {
        int temp=arr[0];
        for(i=0 ; i < n-1 ; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = temp;
    }
    for(i=0 ; i<n ; i++)
    {
        cout<<arr[i];
    }
}
