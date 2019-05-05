#include<iostream>
using namespace std;
bool checkMember(int n){
    int a;
    int b;
    int c;
    a=0;
    b=1;
    cin>>n;

  while(c<=n)
  {
   		c=a+b;
  		a=b;
    	b=c;
    	if(c==n)
     	{
      	return true ;
    	}
    	else
        {
          return false ;
        }
  }
}
int main()
{
    int n,a,b,c;



    bool s=checkMember(n);
    if(s==0)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }




}

