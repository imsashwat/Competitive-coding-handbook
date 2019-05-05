#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr1[]="abcde";
    char arr2[]="baedc";
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    if(len1 != len2)
    {
        return false;
    }
    int i,count,j=0;
    while(i<len+1)
    {
        for(j=0;arr2[j]!='\0';j++)
        {
            if(arr1[i]==arr2[j])
            {
                count++;
            }
        }
        i++;
    }
}
