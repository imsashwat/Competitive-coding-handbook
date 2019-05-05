#include<iostream>
using namespace std;

// Print name and average separated by space
int main() {
    int a,b,c;
    char x;
    cout<<"x"<<endl;
    cin>>a>>b>>c;
    if(a<=b && a<=c){
        cout<<"x"<<" "<<(b+c)/2<<endl;
    }

      else if(b<=a && b<=c){
        cout<<"x"<<" "<<(a+c)/2<<endl;
    }

  		else{

          cout<<"x"<<" "<<(a+b)/2<<endl;
        }


    }
