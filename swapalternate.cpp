#include<iostream>
using namespace std ;
void swap(int arr[100],int size)
{
 int i ;
 cin>>size ;
 for(i=0 ; i<size ; i++)
 {
     cin>>arr[i];
 }
  int temp;
  i=0;
  int j=0;
  if(size%2==0)
  {
  j=1;
  }
  while(i<(size-j))
  {
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    i=i+2;
  }
  for(int i=0;i<size-1;i++)
  {
    cout<<arr[i];
  }
  {
  cout<<arr[size];
  }
 return ;
}
int main()
{
    int arr[100];
    int size ;
    swap(arr,size) ;
}
