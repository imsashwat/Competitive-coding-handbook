#include <iostream>
 using namespace std ;

    int fehrenheitCelsius( int s , int e , int g  )
    {
        int c;
         while(s<=e)
         {
            c = ((s-32)*5)/9 ;

         }
         return c;
    }
    int main()
    {
        int start=0;
        int end = 100;
        int gap=20;
        while(start<=end)
        {
            int d= fehrenheitCelsius(start,end ,gap);
            cout<<start<<"   "<<d<<endl;
            start=start+gap;
        }

    }
