#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;

    if(a >= b && a >= c) { 
        cout << a << endl;
        return 0;       // end the program
    }
    if(b >= a && b >= c) {
        cout << b << endl;
        return 0;
    }
    cout << c << endl;
    return 0;   // Optional

    // Way 2
    if(a >= b && a >= c) {
        cout << a << endl;
    }
    else {
        if(b >= a && b >= c) {
            cout << b << endl;
        }
        else {
            cout << c << endl;
        }
    }

    // Way 3
    if(a >= b && a >= c) {
        cout << a << endl;
    }
    else if(b >= a && b >= c) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }

























    /*
    cin >> a;
    cin >> b;
    cin >> c;
    */

}

