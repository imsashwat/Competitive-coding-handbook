#include<iostream>
using namespace std ;
int main()
{
    int n,cr,col,val;
    cr=1;

    cin>>n;
    int count=n ;
    while(cr<=count)
    {
        col=1 ;
        while(col<=n)
        {
            cout<<col;
            col=col+1 ;
        }
        cr=cr+1 ;
        n=n-1 ;
        cout<<endl;
    }

}
