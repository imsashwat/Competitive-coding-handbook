#include<iostream>
using namespace std;
int main()
{
    int i = 64;
    char c=i;
    cout<<c<<endl;
    int * p= &i;
    char * pc=(char*)p;
    cout<<* pc;
}
