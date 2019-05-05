#include<iostream>
using namespace std;

 void printFibonacci(int a , int b , int cn , int n )
 {
     a=0;
     b=1;
     while(cn<=n)
     {
         int c=a+b;
         cout<<c<<" "<<endl;
         a=b;
         b=c;
     }
 }

 int main()
 {
     int first , second , currnum;
     int num;
     cin>>num;
    printFibonacci (first , second ,currnum , num);
 }







