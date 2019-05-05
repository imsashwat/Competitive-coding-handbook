#include<iostream>>
using namespace std;
int arrSum(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }
    int x=arrSum(arr+1,size-1);
    cout<<x<<" : ";
    cout<<endl;
    return x+=arr[0];
}
int main()
{
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int sum=arrSum(arr,size);
    cout<<sum;
}
