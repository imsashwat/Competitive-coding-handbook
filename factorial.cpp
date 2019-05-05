#include<iostream>
using namespace std;
int main()
{
    int n,cn,factorial;
    cin>>n;


    while(cn<=n)
    {
     cn=n-1;
     factorial=n*cn;

     if(cn==1)
     {
         break ;
     }
      cn=cn - 1;
    }
        cout<<factorial;

}
