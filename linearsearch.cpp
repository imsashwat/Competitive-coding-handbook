#include<iostream>
using namespace std ;

int linearSearch(int arr[], int n ,int val){

     cin>>n;
     int i ;
     for(i=0 ; i < n ; i++)
     {
         cin>>arr[i];
     }
     cin>>val;
     for(i=0 ; i < n ; i++)
     {
        if(arr[i] == val)
     {

        return i ;
         }


         }
         cout<<"-1" ;
     }

    int main()
    {
        int arr[100],n,val;

     int d =  linearSearch(arr,n,val) ;
     cout<<d;
    }
