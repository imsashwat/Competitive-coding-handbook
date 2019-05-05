#include<iostream>
using namespace std;
int FindUnique(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
     cin>>n;
    int i ;
  	int j ;
  	int d=0 ;
  for(i=0 ; i<n ; i++)
  {
      cin>>arr[i] ;
   }
   for(i=0 ; i<n ; i++){
      cin>>arr[i] ;
      int count=0 ;
 	  for(j=0;j<n;j++){
      if(arr[i]==arr[j])
      {
       count++ ;
      }
    }
      if(count==1){

        d=arr[i] ;
        cout<<d;
        break ;
      }
    }
  return d ;
}
int main()
{
    int arr[10] ;
    int size ;
   int x = FindUnique(arr , size) ;
   cout<<x;
}
