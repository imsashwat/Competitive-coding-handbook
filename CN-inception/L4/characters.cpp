#include <iostream>
using namespace std;

int main() {
    int count = 0;
    char currentChar;
    //cin >> currentChar;
    
    currentChar = cin.get();

    while(currentChar != '$') {
        count++;
        //cin >> currentChar;
        currentChar = cin.get();
    }

    cout << count << endl;
}

