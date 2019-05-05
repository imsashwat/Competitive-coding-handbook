#include <iostream>
 using namespace std ;

    void fehrenheitCelsius( int s , int e , int g  )
    {
         s =0 ;
         e=100 ;
         g=20  ;
         while(s<=e)
         {
             int c = ((s-32)*5)/9 ;
             cout<<s<<"        "<<c<<endl;
             s=s+g;
         }
    }
    int main()
    {
        int start ;
        int end;
        int gap;
        fehrenheitCelsius(start,end ,gap);

    }
