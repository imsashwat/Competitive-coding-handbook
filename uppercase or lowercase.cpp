#include<iostream>
using namespace std;
//a program to determine whether  the entered character is in upper case or lower case


int main(){
    char x;
    cin>>x;
    if(x >= 65 && x <= 90){
        cout<<"1";
    }
        else if(x >= 97 && x <= 122){
            cout<<"0";
            }
        else{
            cout<<"-1";
        }
        }
