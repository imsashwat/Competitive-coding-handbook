#include<iostream>
using namespace std;
int sum(int input[],int size)
{
    if(size==0)
    {
        return 0;
    }
    else{

        int max=input[0] + sum(input+1,size-1);
       //cout<<"this"<<input+1[size-1]<<" ";
        return max;
    }
}
int main()
{
    int arr[10]={2,6,4};
    int n=3;
    int z = sum(arr,n);
    cout<<z;
}
