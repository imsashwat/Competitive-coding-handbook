#include<iostream>
using namespace std;
int main()
{
    int n,cr,col,sp,val,i;
    cr=1  ;

    cout<<"ENTER THE NUMBER OF ROWS ";
    cin>>n;

    while(cr<=n)
    {
        val = cr;
        sp=1 ;
        while(sp<=n-cr)
        {
            cout<<" ";
            sp=sp+1;
        }
        int count=0 ;
        for(i=1;i<=(2*(cr)-1);i++)
        {
            if(count<(2*(cr)-1)/2){
                cout<<val;
                val=val+1;
                count=count+1;
            }
            else
            {
                cout<<val;
                val=val-1;
                count=count+1;
            }
        }
         cr=cr+1;
         cout<<endl;
    }
}
