#include <iostream>
using namespace std;

int main() {
    //int i = 1;
    //while(i <= 2) {
     for(int i = 1; i <= 2; i++) {
        for(int j = 1; j <= 3; j++) {
            if(j == 2) {
                break;
            }
            cout << j << " ";
        }
        cout << i << " ";
    }

    for(int i = 1; i <= 5; i += 2) {
        cout << i << endl;
    //    i++;
    }

    int i = 1;
    for( ; ; ) {
        if(i == 5) {
            break;
        }
        cout << i << endl;
        i++;
    }

    // Continue
    



























}

