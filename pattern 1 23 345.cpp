#include<iostream>
using namespace std;

int main()
{
    int n,cr,col ;
    cr = 1 ;
    cin>>n;

    while(cr<=n)
    {
        col=1;
        while(col<=cr)
        {
            if(col==1 && col==cr){
                cout<<cr<<" ";
            }
            else
            {
                col=col+1 ;
                cout<<col<<" ";

            }
        }
        cr=cr+1;
        cout<<endl;
    }
}
