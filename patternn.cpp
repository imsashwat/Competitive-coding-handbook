#include<iostream>
using namespace std;
int main()
{
    int n,cr,val,col;
    cr=1;


    cin>>n;
    cout << "1" << endl;
    cr++;
    while(cr<=n)
    {
        col=1;
        val=cr;
        while(col<=cr)

        {

            if(col==1 || col==cr)
            {
                cout<<(cr-1);
                col=col+1;
            }
            else
            {
                cout<<"0";
                col=col+1;
            }
        }
            cr=cr+1;
            cout<<endl;

    }
}

