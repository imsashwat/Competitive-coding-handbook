#include<iostream>
using namespace std;
bool checkNumber(int arr[],int size,int item)
{
    if(size==0)
    {
        return false;
    }
    if(arr[size-1]==item)
    {
        return true;
    }
    checkNumber(arr,size-1,item);
}
int main()
{
    int arr[10]={0};
    int size,item;
    cin>>size;
    cout<<"enter the item"<<endl;
    cin>>item;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    bool ans=checkNumber(arr,size,item);
    cout<<ans;
}
