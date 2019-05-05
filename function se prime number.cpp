#include<iostream>
	 using namespace std;

	 bool isPrime(int n)
	 {
	  int cn=2;
	  while(cn<n)
	  {
	   if(n%cn==0)
	   {
	     return false ;
	   }
	   cn++;
	  }
	  return true;
	 }

	 int main()
	 {
		int n;
		cin>>n;
		for(int x=2 ; x<=n ; x++)
		{
		 if (isPrime(x))
		 {
		 cout<<x<<endl;
		 }
		}
	 }
