#include<iostream>
using namespace std;
int checkNumber(int arr[],int size,int item)
{
    if(size==0)
    {
        return -1;
    }
    if(arr[0]==item)
    {
        return 0;
    }
    int ans= checkNumber(arr+1,size-1,item);
    if(ans!=-1)
    {
     return ans+1;
    }
    else
    {
        return ans;
    }
}
int main()
{
    int arr[10]={9,8,10,8};
    int size=4;
    int item=8;
    int ans=checkNumber(arr,size,item);
    cout<<ans;
}
