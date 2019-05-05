#include <iostream>
using namespace std;
#include "pair.cpp"

int main()
{
    Pair<int> p1;
    p1.setX(10);
    p1.setY(20);

    cout << p1.getX() << " " << p1.getY() << endl;

    Pair<double> p2;

    p2.setX(110.232);
    p2.setY(32.23);
    cout << p2.getX() << "  " << p2.getY() << endl;
}
