#include <iostream>
using namespace std;

void funC(int a) {
    cout << a << endl;
}

int funB() {
    cout << "Hello" << endl;
    int a = 5;
    funC(a);
    return 5;
}

void funA() {
    cout << "A" << endl;
    int c = funB();
    cout << c << endl;
}




void pattern_1(int n) {

}
















int increment(int a) {
    a++;
    cout << a << endl;
    return a;
}

int main() {
    int a = 5;
    a = increment(a);
    cout << a << endl;
    
    
    //funA();   

    return 0;

}




















