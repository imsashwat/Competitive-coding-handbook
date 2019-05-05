#include<iostream>
using namespace std;
int main()
{
    int n,cr,sp,st;
    cin>>n;
    cr=1;
    while(cr<=n)
    {
        sp=1 ;
        while(sp<=n-cr)
        {
            cout<<" ";
            sp=sp+1 ;
        }
        st=1 ;
        while(st<=2*cr-1)
        {
            cout<<"*";
            st=st+1;
        }
        cr=cr+1;
        cout<<endl;
    }
}
