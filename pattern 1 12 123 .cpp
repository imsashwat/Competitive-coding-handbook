#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cr=1;
    while(cr<=n)
    {
        int col=1;
        while(col<=cr)
        {
         if(col==1 || col==cr)
         {
             cout<<"1";
             col=col+1;
         }
         else
            {
            cout<<"0";
            col=col+1;
         }

        }
        cout<<endl;
        cr=cr+1;
    }

}
