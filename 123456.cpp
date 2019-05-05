#include<iostream>
using namespace std;
int main(){
        int cr,val,col,n;
        cr=1;
        val=1;
        cout<<"ENTER THE NUMBER OF ROWS"<<" ";

        cin>>n;
        while(cr<=n){
            col=1;
            while(col<=cr){
                cout<<val<<" ";
                val++;
                col++;
            }
            cr++;
            cout<<" "<<endl;
        }
        cout<<"FOLLOWING PATTERN IS OBSERVED";
        }

