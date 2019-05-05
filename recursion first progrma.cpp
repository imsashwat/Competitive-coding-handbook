#include<iostream>
using namespace std;
int print(int x)
{
    if(x==1)
    {
        return x;
    }
    else{
       int s= print(x-1);
        return x+s;
    }
}
int main()
{
   long int n;
    cin>>n;
   int z= print(n);
   cout<<z;
}
