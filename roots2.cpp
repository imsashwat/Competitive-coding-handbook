#include<iostream>
#include<math.h>
using namespace std;
int main(){
        int a,b,c;
        double x1,x2,determinant;
        cin>>a>>b>>c;
        determinant=b*b - 4*a*c ;
        if(determinant>0){
                int x1,x2;
            x1 = (-b + sqrt(determinant))/(2*a) ;
            x2 = (-b - sqrt(determinant))/(2*a) ;
            cout<<"1"<<endl;
            cout<<round (x1)<<" "<<round (x2);

        }
           else if (determinant == 0) {
           cout <<"0"<< endl;
           x1 = (-b + sqrt(determinant)) / (2*a);
           cout << round (x1) <<" "<<round (x1)<< endl;
    }
            else {
                cout<<"-1";
            }

            }
