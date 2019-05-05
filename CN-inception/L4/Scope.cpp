#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << a << endl;

    if(a > 2) {
        int b = 10;
    }
    else {
     //   cout << b << endl;
    }
   // cout << b << endl;

    int a = 10;
    cout << a << endl;

    //-------
    int a = 5;
    if(a > 3) {
        int a = 6;
        cout << a << endl;          // 6
        a++;
    }
    cout << a << endl;


    // ---------
    int a = 5;
    if(a < 3) {
        int b = 4;
    }
    else {
        cout << b << endl; 
        int b = 3;
    }

    // ---------

    int a = 5;
    if(a > 2) {
        int b = 3;
        if(b > 1) {
            cout << b << endl;
        }
    }

    // ---------
    int a = 4;
    if(a > 2) {
        int b = 4;
    }
    if(a > 1) {
        cout << b << endl;
    }

    // ---------
    int i = 1;
    while(i <= 4) {
        int j = 1;
        cout << j << endl;
        j++;
        i++;
    }

    // --------
    int i;
    for(i = 1; i <= 5; i++) {
        cout << i << endl;
    }
    cout << i << endl;

    // ----
    














}






