#include <iostream>
using namespace std;
#include <cstring>
#include "stacks.cpp"

int main()
{
    Stacks s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(80);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;


}
