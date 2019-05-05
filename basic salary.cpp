#include<iostream>
using namespace std;
int main(){

        int ts,bs,hra,da,allow,pf;
        char grade;
        cin>>bs>>grade;

        if(grade == 65){
            hra   = (20*bs)/100;
            da    = (50*bs)/100;
            allow = 1700 ;
            pf    = (11*bs)/100;

            ts = bs + hra + da + allow - pf;
            cout<<ts<<endl;
        }
        else if(grade == 66){
            hra   = (20*bs)/100;
            da    = (50*bs)/100;
            allow = 1500 ;
            pf    = (11*bs)/100;

            ts = bs + hra + da + allow - pf;
            cout<<ts<<endl;
        }
        else if(grade == 67){
            hra   = (20*bs)/100;
            da    = (50*bs)/100;
            allow = 1300 ;
            pf    = (11*bs)/100;

            ts = bs + hra + da + allow - pf;
            cout<<ts<<endl;
        }
        else {
            cout<<"0";
        }

        }
