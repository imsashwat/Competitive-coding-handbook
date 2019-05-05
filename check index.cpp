#include<iostream>
using namespace std;
int check(int a[],int size,int x)
{
    if(size==0)
    {
        return -1;
    }
    if(a[0]==x)
    {
        return 0;
    }
    int ans = check(a+1,size-1,x);
    if(ans==-1)
    {
        return -1;
    }
    else{
        return ans+1;
    }

}
int main()
{
    int arr[]={9,8,10,8};
    int n = 4;
    int val;
    cin>>val;
    int x = check(arr,n,val);
    cout<<x;
}
