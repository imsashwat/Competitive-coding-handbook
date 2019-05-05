#include<iostream>
using namespace std;

int countDigits(int x)
{
    int smallans=0;
    if(x==0)
    {
        return 0;
    }
    else
    {
        smallans= countDigits(x/10);
        smallans=smallans+1;
        return smallans;
    }

}
int main()
{
    int n;
    cin>>n;
    int f = countDigits(n);
    cout<<f;
}
