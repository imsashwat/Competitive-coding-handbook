#include <iostream>
using namespace std;
#include "useconstant.cpp"

int main()
{
    fraction f1(10,2);
    fraction f2(15,4);

    fraction const f3;

    cout<< f3.getNum() << " " << f3.getDen() <<endl;
    f3.setNum(10);
}
