#include<iostream>
using namespace std;
int digits(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int d=digits(n/10);
        cout<<n;
        return d+1;
    }
}
int main()
{
    int n;
    cin>>n;
    int z=digits(n);
    cout<<z<<endl;
}
