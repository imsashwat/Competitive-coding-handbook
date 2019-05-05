#include<iostream>
using namespace std;
bool check(int a[],int size,int val)
{
    if(size==0)
    {
        return false;
    }
    if(a[0]==val)
    {
        return true;
    }
    bool d = check(a+1,size-1,val);
    return d;
}
int main()
{
    int arr[]={9,8,10};
    int n =3;
    cout<<n<<endl;
    int item;
    cin>>item;
    bool output=check(arr,n,item);
    cout<<output;
}
