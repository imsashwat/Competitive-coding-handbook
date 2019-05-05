#include <iostream>
using namespace std;

void numbers(int x)
{
    if(x==0)
    {
        return ;
    }
    else
    {
         numbers(x-1);
        cout<<x<<" ";
        return ;
    }
}
int main()
{
    int n = 6;
    numbers(n);

}
