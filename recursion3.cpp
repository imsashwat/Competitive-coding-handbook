#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }

    int a=sum(n-1);
    return n+a;
}
int main()
{
    int n=3;
    int d=sum(n);
    cout<<d;
}
