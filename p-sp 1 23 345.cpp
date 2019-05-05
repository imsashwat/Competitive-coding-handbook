#include<iostream>
using namespace std;
int main()
{
    int n,sp,cr,val ;
    cin>>n;
    cr=1 ;
    while(cr<=n)
    {
        sp=1 ;
        while(sp<=n-cr)
        {
            cout<<" ";
            sp=sp+1 ;
        }
            val=cr;
            int count = 1;
            int col = cr;
            while(count <= col)
            {
                cout<<val;
                val=val+1;
                count++;
            }
            {
            cr=cr+1 ;
            cout<<endl;
            }
    }
}
