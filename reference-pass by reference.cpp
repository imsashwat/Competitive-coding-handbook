#include<iostream>
using namespace std;
void increment(int &n)
{
    n++;
    cout<<n<<endl;
}
int main()
{
    int i=10;
   increment(i);
   cout<<i;
}
