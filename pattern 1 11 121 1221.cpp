#include<iostream>
using namespace std;
int main()
{
  int n,cr,col,val;
  cr=1 ;
  cin>>n;
  while(cr<=n)
  {
      col=1;
      val=cr;
      while(col<=cr)
      {
          if(col==1 || col==cr)
          {
              cout<<"1";
              col++ ;
          }
          else
          {

              cout<<"2";
              col++ ;
          }
      }
        cr=cr+1 ;
        cout<<endl;
  }
}
