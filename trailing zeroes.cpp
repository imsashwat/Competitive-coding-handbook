#include<iostream>
using namespace std ;
int main()
{
        int n;
        int count=0;
        cin>>n;
        int c;
        int i=5;

        while(i<=n)
        {
            c=n/i;
            count+=c ;
            i=i*5;

        }
        cout<<count;
}
