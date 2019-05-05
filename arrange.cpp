#include<iostream>
using namespace std ;
void arrange(int arr[],int size)
{
    cin>>size ;
    int i ;
    int j ;
    int num;
    for(i=0 , num=1 ; i<(size+1)/2 ;i=i+1 , num=num+2)
    {
        arr[i] =num ;
        cout<<arr[i] ;
    }
    num=2;
    for(i=size-1 , num=2 ; i >= ((size+1)/2) ;i-- , num+=2 )
    {
        arr[i]=num ;
        cout<<arr[i] ;
    }
    return ;
}
int main()
{
    int arr[100] ;
    int size ;
    arrange(arr,size) ;
}
