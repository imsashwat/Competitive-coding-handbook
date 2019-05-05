#include<iostream>
using namespace std;
#include<cstring>
int main()
{
   char arr1[10];
   cin>>arr1;
   char arr2[10];
   cin>>arr2;
   int len1=strlen(arr1);
   cout<<len1;
   int len2=strlen(arr2);
   cout<<len2;
   int input[255] = {0};

    int i=0;
    while(arr1[i] != '\0')
    {
        int index = arr1[i];
        input[index];
        index++ ;
        i++ ;
    }
    while(arr2[i] != '\0')
    {
        int index = arr2[i];
        input[index];
        index-- ;
        i++ ;
    }
    for(i=0 ; i<256 ; i++)
    {
        if(input[i]!= 0)
        {
            cout<<"no" ;
        }
        }
        cout<<"yes";
    }

