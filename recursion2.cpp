#include<iostream>
using namespace std;
int power(int n,int x)
{

    if(n==0 && x==0)
    {
        return 0;
    }
    else if(x==0)
    {
        return 1;
    }
     int ans=power(n,x-1);
     cout<<ans<<endl;
     return n*ans;

}
int main()
{
    int n;
    int x;
    cout<<"N"<<"X";
    cin>>n>>x;
    int p=power(n,x);
    cout<<p;
}
