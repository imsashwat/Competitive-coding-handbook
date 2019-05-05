#include<iostream>
using namespace std;
int main(){
    int n,cr,sp,st;
    cr=1;

    cout<<"enter the number of rows"<<" ";
    cin>>n;

    while(cr<=n){
        sp=1;
        while(sp<=n-cr){
            cout<<"   ";
            sp++ ;
        }
            st=1;
            while(st<=2*cr-1){
                cout<<" * ";
                st++ ;
            }
            cr++ ;
            cout<<endl;
    }

        }

