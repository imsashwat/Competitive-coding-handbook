#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cin>>n;

    while(n>0)
    {
        num=n%10 ;
        if(num==0)
        {
            cout<<"" ;
            n=n/10 ;
        }
        else
        {
        cout<<num<<" ";
        n=n/10  ;
        }
}
}
