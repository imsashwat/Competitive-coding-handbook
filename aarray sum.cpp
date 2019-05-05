#include<iostream>
using namespace std ;

void linearSearch(int arr[], int n ,int val){

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
        cout<<i;
        break ;
         }
         else
         {
             cout<<"-1" ;
         }

     }


}
    int main()
    {
        int arr[100],n,val;

       linearSearch(arr,n,val) ;
         }
