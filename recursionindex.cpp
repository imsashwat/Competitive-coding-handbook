#include <iostream>
using namespace std;

float lIndex(float arr[],int n,float item)
{

    if(n==0)
    {
        return -1;
    }

        float ans = lIndex(arr+1,n-1,item);
        if(ans != -1)
        {
            return ans+1;
        }
        if(arr[0]==item)
        {
            return 0;
        }
        else
        {
            return -1;
        }
}
int main()
{
    float arr[10]= {9,8,10,8};
    int n=4;
    float item=10;

    float x = lIndex(arr,n,item);
    cout<<x;
}
