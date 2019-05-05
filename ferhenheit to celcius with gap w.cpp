#include<iostream>
using namespace std;


int main()
{
   int start;
   int last;
   int gap;
   int celsius;
   cin>>start>>last>>gap;

   while(start<=last)
   {
     celsius=(start-32)*5/9;
     cout<<start<<" ";

     start=start+gap  ;
      cout<<celsius<<endl;
   }



}
