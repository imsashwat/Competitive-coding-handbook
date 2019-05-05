#include<iostream>
using namespace std;
int main()
{
        int n,cn,c;
        cout<<"enter the number ";
        cin>>n;
        cn=1 ;

        cout<<"enter the choice ";
        cin>>c;
        if(c==1)
        {
            int sum=0 ;
            while(cn<=n)
            {
                sum=sum+cn ;
                cn++ ;
            }
            cout<<sum;
        }
        else if(c==2)
        {
            int product = 1;
            while(cn<=n)
            {
                product= product*cn;
                cn++ ;
            }
             cout<<product;
        }
        else
        {
            cout<<"-1";
        }

    }
