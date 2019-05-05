#include <iostream>
using namespace std;
int main(){
    int n,currentnumber;
    cout<< "please enter the number"<<" " ;
    cin>> n ;

    currentnumber = 2;
    while(currentnumber<n){
        if(n%currentnumber==0){
            cout<< "the number you have entered is not prime" ;
            return 0;
        }
        else{
            currentnumber = currentnumber + 1;
        }

    }
    cout<< "is prime" ;
}
