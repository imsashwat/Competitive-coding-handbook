#include<iostream>
using namespace std;
int main()
{
    int cr,n,col,val ;
    cin>>n;
    cr=1 ;

    while(cr<=n)
    {
         val=cr ;
        col=1 ;
        while(col<=cr)
        {
            cout<<val;
            col=col+1 ;
            val=val+1 ;

        }
        {


        cr=cr+1 ;
        cout<<endl;
        }
    }
}
