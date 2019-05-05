#include<iostream>
using namespace std;
int multiply(int x,int y)
{
    if(y==0)
    {
        return 0;
    }
    return x + multiply(x,y-1);
}
int main()
{
    int m,n;
    cin>>m>>n;
    int c=multiply(m,n);
    cout<<c;
}
