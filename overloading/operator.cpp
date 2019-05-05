#include <iostream>
 using namespace std;
#include "operatoruse.cpp"

int main()
{
    fraction f1(10,3);
    fraction f2(5,2);
    (f1+=f2)+=f2;
    f1.print();
    f2.print();

    //fraction f3 =  f1++ ;

    //f3.print();
    //f1.print();
    //f1.print();

}
