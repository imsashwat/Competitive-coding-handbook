#include<iostream>
using namespace std;

int main()
{
    int n,cr,col,val;
    cr = 1 ;
    n=4;

    while(cr<=n)
    {
        col=1;
        val=cr;
        while(col<=cr)
        {
            cout<<val<<" ";
            val=val+1 ;
            col=col+1 ;
        }


        cr=cr+1;
        cout<<endl;
    }

}
