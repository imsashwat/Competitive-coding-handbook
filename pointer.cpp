#include<iostream>
using namespace std ;

/*
void fun(int a, int *b){
a++ ;
(*b)++ ;
b++ ;
(*b)++ ;
}
*/

int main()
{
char arr[20] ;
int i ;
for(i=0;i<10;i++)
{
    *(arr + i)=65+i ;
}
*(arr+i)='\0';
 cout<<arr ;
 return 0 ;
}
