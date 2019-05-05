#include<iostream>
using namespace std;
int main()
{
    int n,evensum,oddsum,num;

    evensum=0;
    oddsum=0 ;
    cin>>n;

    while(n>0)
    {
            num=n%10 ;

            if(num%2==0)
            {
                evensum=evensum+num;

                 n=n/10;

            }
            else
            {

                oddsum=oddsum+num;
                 n=n/10;

            }

    }
    cout<<evensum<<" "<<oddsum;

}
