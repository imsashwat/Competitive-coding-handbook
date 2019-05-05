#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 15;


    if(a < b) {
        cout << "Hello " << endl;
        return 0;
    }
    else {
        cout << "Hey" << endl;
        return 0;
    }
    cout << "Hi" << endl;


    // a = 20, b = 15
    if(a < b) {
        cout << "Hello" << endl;
    }
    if(a > 2) {
        cout << "Hey" << endl;
    }
    cout << "Hi" << endl;


    // a = 1, b = 5;
    if(a > b) {
        cout << "Hello" << endl;
    }
    else {
        if(b > 2) {
            cout << "Hey" << endl;
        }
        else {
            cout << "Hi" << endl;
        }
    }


    // a = 5, b = 10
    if(a > b) {
        cout << "Hello" << endl;
    }
    else {
        cout << "abc" << endl;
    }
    else if(a > 2) {
        cout << "Hey" << endl;
    }
    else if(a > 1) {
        cout << "Hi" << endl;
    }
}





















}

