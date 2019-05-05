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
/*
#include<iostream>
using namespace std;
float checkNumber(float arr[],int size,float item)
{
    if(size == 0)
    {
        return -1;
    }
    if(arr[0] == item)
    {
        return 0;
    }
    else
    {
        float ans = checkNumber(arr+1,size-1,item);
        if(ans != -1)
        {
            return ans+1;
        }
        else{
            return -1;
        }
    }
}
int main()
{
    float arr[10]={7.3,8.3,8.4,3.4};
    int size=4;
    float item=8.4;
    float ans=checkNumber(arr,size,item);
    cout<<ans;
}

*/
