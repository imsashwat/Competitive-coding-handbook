#include<iostream>
using namespace std;
void mergeSorted(int arr1[],int n1,int arr2[],int n2,int ans1[])
{
     int i,j,temp;
     cout<<"enter first array elements :";
    for(i=0 ; i<n1 ; i++)
    {
        cin>>arr1[i];
    }
      cout<<"enter second array elements :";
      for(i=0 ; i<n2 ; i++)
    {
        cin>>arr2[i];
    }
    i=0 ;
    j=0 ;
   int  k=0;
   int count =0;
    while(i<=n1 && j<=n2 )
    {
        if(arr1[i]<=arr2[j])
        {
            ans1[k]=arr1[i];
        }
        else
        {
            ans1[k]=arr1[j] ;
        }
        k++ ;
        count++ ;

        //filling remaining array
         while(i < n1)
        {
        ans1[k] = arr1[i];
        i++;
        k++;
        count++;
        }

    while(j < n2)
        {
        ans1[k] = arr2[j];
        cout<<ans1[k];
        k++;
        j++;
        }
    }
    for(i=0 ; i<9 ;i++ )
    {
        cout<<ans1[k];
    }
}
int main()
{
    int a1[100];
    int a2[100];
    int ans[100];
    int size1;
    cout<<"enter size of first array :";
    cin>>size1;
    cout<<"enter size of second array :";
    int size2;
    cin>>size2;
     mergeSorted(a1,size1,a2,size2,ans);
}
