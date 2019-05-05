#include<iostream>
using namespace std;
int allIndex(int a[],int size,int x,int output[])
{
  if(size==0)
  {
      return 0;
  }
  int c=allIndex(a+1,size-1,x,output);
cout<<c<<"   "<<endl;

    return c;
}
int main()
{
    int arr[]={9,8,10,8,8};
    int n=5;
    int z=8;
    int output[4];
    int ans=allIndex(arr,n,z,output);
    cout<<ans;
}
