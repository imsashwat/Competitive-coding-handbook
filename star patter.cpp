#include <iostream>
using namespace std;
 int main()
 {
     int n;
     cout<<"enter the no. of pattern:"<<endl;
     cin>>n;
     int cr=1;
      while(cr<=n)
      {
          int sp=1;
          while(sp<=n-cr)
          {
              cout<<" ";
              sp=sp+1;
          }
          int val=cr;
          int count=1;
          while(count<=cr)
          {
              cout<<val;
              val=val+1;
              count++;
          }
            cout<<endl;
            cr=cr+1;
      }
 }
