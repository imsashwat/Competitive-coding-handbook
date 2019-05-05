#include <iostream>
using namespace std;
 bool prime(int n){
     int cn = 2;
    while(cn<n){
        if(n%cn==0){
            return false;
        }
       cn++;
    }
    return true;
 }

 int main(){
        int n;
        cin >> n;
        bool s=prime (n);
        if (s==0){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
        }

