#include<iostream>
using namespace std;
int main(){
    int n , currentrow , column , value;
    cin>>n;
    currentrow=1;
    value=1;
    while(currentrow<=n){
        column=1;
        while(column<=currentrow){
                if(column==1 || column==currentrow){
                cout<<value ;

                column=column+1;
                }
                else {
                    cout<<"2";
                }


        }
        currentrow=currentrow+1;
        cout<<" " << endl;
    }

}
