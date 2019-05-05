#include<iostream>
using namespace std;
/*
int main()
{
    int a=10;
    int *p=&a;
    cout<<*p<<endl;
    int **q=&p;
    cout<<**q<<endl;
    int b=20;
    *q=&b;
    (*p)--;
    cout<<*p<<"#"<<endl;

    cout<<a<<" "<<b<<endl;
}
*/
/*
void increment1(int** p)
{
    p=p+6;
    cout<<p<<endl;
}
void increment2(int* p)
{
    p=p+1;
    //cout<<"#"<<*p;
}
int main()
{
    int i=8;
    int* p=&i;
    int ** p2 = &p;
    cout<<p2<<endl;
    increment1(p2);
    increment2(p);
}

int main()
{
    int arr[]={4,5,6,7};

    cout<<*(arr+1)<<endl;
    cout<<*arr+9;

}
int main()
{
   // char *x="geeksquiz";
   // int p=12;
   // int *x=&p;

   // x=x+3;
   // cout<<x<<"   "<<*x;
   char x[20];
   int i;
   for( i=0 ; i<10 ;i++)
   {
        *(x+i)=65+i;
   }
   *(x+i)='\0';
   cout<<x;
}
*/
/*
int main()
{
    char *ptr;
    char str[] ="abcdefg";
    ptr=str;
    cout<<*ptr<<endl;
    ptr=ptr+5;
    cout<<*ptr;
}
*/
 int main()
 {
  int arr[]={4,5,6,7};
  int *p = (arr+1);
  for(int i=*p ; i<4 ;i++)
  {
      cout<<arr[*p];
  }
 }
