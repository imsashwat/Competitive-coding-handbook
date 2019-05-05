#include <iostream>
using namespace std;

int count(int x)
{
    if(x==0)
    {
        return 4;
    }

    else
    {
        int smallAns = count(x/10);
        cout<<smallAns<<"  ";
        smallAns += 1;
        return smallAns;
    }
}

int main()
{
    int n;
    cin>>n;
    int d =count(n);
    cout<<d;
}
