#include <iostream>
using namespace std;
#include "arrayclass.cpp"

int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    DynamicArray d2(d1);//shallow copy
    d1.print();
    //d2.print();
    DynamicArray d3;
    d3 = d1;
    d3.print();
    d1.add(1, 100);
    d3.print();
    d1.print();
    //d2.print();

}
