#include <iostream>
using namespace std;

int main(){
  int arr[100000],n,i,sumeven,sumodd,diff;
   sumeven = 0;
   sumodd  = 0;

  	cin>>n;
  	for(i=0;i < n ; i++)
    {
      cin>>arr[i];
      if(arr[i]%2==0)
      {
        sumeven += arr[i];


      }
      else
      {
        sumodd += arr[i] ;

      }
      cout<<sumeven;
      cout<<sumodd ;

    }

  		diff=sumeven - sumodd ;
        cout<<diff;
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */

}


