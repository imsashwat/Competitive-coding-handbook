#include<iostream>
using namespace std;

      void reverse(int arr[100],int n)
            {
             int i;
             int j;
             int temp ;
	// Write your code here
            cin>>n;

            for(i=0; i < n ; i++ )
            {
            cin>>arr[i];
            }
              j=i-1 ;
              i=0   ;

              while(i<j){
                temp=arr[i] ;
                arr[i]=arr[j];
                arr[j]=temp  ;
                i++ ;
               j--  ;
              }
              for(i=0 ; i<n ;i++){
                cout<<arr[i]<<" ";
              }
              return ;
            }
            int main()
            {
             int arr[100] ;
             int n ;
            reverse(arr,n) ;
            }







