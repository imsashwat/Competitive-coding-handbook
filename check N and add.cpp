#include<iostream>
using namespace std;
int main(){
    int N,X,EVENSUM,ODDSUM;
    EVENSUM = 0 ;
    ODDSUM  = 0 ;
    cin>>N;

    while(X=N%10){
         if(X%2==0){
            EVENSUM+X ;
            cout<<EVENSUM+X ;
            N/10 ;
        }

        else {
            ODDSUM+X ;
            cout<<ODDSUM+X ;
            N/10 ;
    }
    }
}
