#include <iostream>
using namespace std;

int power(int x,int n)
{

    if(n == 0)
    {
        return
        1;
    }
    else
    {
    int smallAns = power(x,n-1);
    cout<<smallAns<<"  ";

    return x*smallAns;
    }
}
int main()
{
    int x,n;
    cin>>x>>n;
    int d = power(x,n);
    cout<<endl;
    cout<<d;
}
