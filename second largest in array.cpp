#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] = {2,6,1,9,8,5,7};
    int n = 7 ;
    int i;
    int first = INT_MIN ;
    int second= 0;
    for(i=0 ; i<n ;i++)
    {
        if(arr[i]>first)
        {
            second = first ;
            first  = arr[i] ;
        }
        else if( arr[i]>second && arr[i]!= first)
        {
            second = arr[i];
        }
    }
    cout<<second;
}
